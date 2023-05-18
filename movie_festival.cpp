#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
const int MOD = 1e9 + 7;

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define itr(c, it)       for (auto it = c.begin(); it != c.end(); it++)
#define lop(i, n)        for (int i = 0; i < (n); i++)
#define inp(x)           for (auto &inps : x)cin >> inps
#define raise(n,m)       int(pow(n,m))
#define out(x)           for (auto outps : x)cout << outps <<" " 


/*
ll max_movie(vector<pll> v, ll idx,ll start){
	if(idx == -1)return 0;
	if(start >= v[idx].second){
		if(dp[idx-1][start] == -1)dp[idx-1][start] = max_movie(v,idx-1,start);
		if(dp[idx-1][v[idx].first == -1]) dp[idx-1][v[idx].first] = max_movie(v,idx -1, v[idx].first);
		return max(dp[idx - 1][start] , 1 + dp[idx - 1][v[idx].first]);
	}
	else{
		return max_movie(v,idx-1,start);
	}
}
*/
bool comp(pll a, pll b){
	if(a.first < b.first)return true;
	if(a.first ==  b.first && a.second<b.second)return true;
	return false;
}
void work(){
	// code from here
	ll n;
	cin>>n;
	vector<pll> v(n);
	lop(i,n)cin>>v[i].first>>v[i].second;
	sort(v.begin(),v.end(),comp);

	int dp[n+1][v[v.size()-1].second];
	memset(dp,-1,sizeof(dp));

	lop(i,n)dp[0][i] = 0;
	lop(i,v.size()) dp[i][0]=0;
	for(int i = 0;i<n;i++){
		for(int j = 1; j <v[v.size()-1].second;j++){
			if(v[i-1].second<=j){
				dp[i][j] = max(dp[i-1][j], 1+dp[i-1][j-v[i-1].second]);
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout << dp[n + 1][v[v.size() - 1].second];
	//lop(i, 10000) lop(j, 10000) dp[i][j] = -1;
	//lop(i,n)cout<<v[i].first<<" "<<v[i].second<<endl;
	//cout<<max_movie(v,v.size()-1,INT_MAX);	
}

int main(){
	fio;
	work();
	return 0;
}