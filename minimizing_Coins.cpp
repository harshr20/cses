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
#define mp(a,b)          make_pair(a,b)
#define pb(x)            push_back(x)

void work(){
	// code from here
	ll n,tar;
	cin>>n>>tar;
	vll v(n);
	inp(v);

	vll dp(tar+1,-1);
	dp[0]=0;
	for(int i =1;i<tar+1;i++){
		ll cur_ans=INT_MAX;
		for(int j=0;j<n;j++){
			if(i-v[j]>=0 && dp[i-v[j]]!=-1)
			cur_ans=min(cur_ans,1+dp[i-v[j]]);
		}
		if(cur_ans==INT_MAX)dp[i]=-1;
		else dp[i]=cur_ans;
	}
	cout<<dp[tar];	
}

int main(){
	fio;
	work();
	return 0;
}