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

int arr[7][7];

void solve(ll i, ll j, string s,ll pos,ll &ans,ll last){
	if(i<1 || j<1 || i>7 || j>7 || pos ==s.size() || arr[i-1][j-1])return;
	//+
	arr[i-1][j-1]=1;
	if(i == 7 && j == 1){
		ans++;
		return;
	}
	if(s[pos]=='R')solve(i,j+1,s,pos+1,ans,1);
	else if(s[pos]=='L')solve(i,j-1,s,pos+1,ans,2);
	else if(s[pos]=='D')solve(i+1,j,s,pos+1,ans,3);
	else if(s[pos]=='U')solve(i-1,j,s,pos+1,ans,4);
	else{/*
		if(last!=2)solve(i, j + 1, s, pos + 1, ans,1);
		if(last!=1)solve(i, j - 1, s, pos + 1, ans,2);
		if(last!=4)solve(i + 1, j, s, pos + 1, ans,3);
		if(last!=3)solve(i - 1, j, s, pos + 1, ans,4);*/
	
		solve(i, j + 1, s, pos + 1, ans, 1);	
		solve(i, j - 1, s, pos + 1, ans, 2);
		solve(i + 1, j, s, pos + 1, ans, 3);
		solve(i - 1, j, s, pos + 1, ans, 4);
	}
	//cout<<i<<" "<<j<<endl;
	//ans++;
}
void work(){
	// code from here
	
	lop(i,7)lop(j,7)arr[i][j]=0;
	//arr[0][0] =1;
	string s;
	cin>>s;
	ll ans = 0;
	solve(1,1,s,0,ans,0);
	cout<<ans;	
}

int main(){
	fio;
	work();
	return 0;
}