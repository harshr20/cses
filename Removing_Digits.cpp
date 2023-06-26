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

vector<int> getdigits(ll num){
	vector<int> dig(10,0);
	while(num){
		dig[num%10]=1;
		num/=10;
	}
	return dig;
}

void work(){
	// code from here
	//s(i)=min(1+s(i-j)) for all js
	ll n;
	cin>>n;
	vll dp(n+1,0);
	dp[0]=0;
	for(int i =1;i<n+1;i++){
		//generate all the digits of number
		vector<int> dig=getdigits(i);
		ll ans=INT_MAX;
		for(int j=1;j<10;j++){
			ll di=dig[j];
			if(di && i-j>=0)ans=1+min(ans,dp[i-j]);
		}
		if(ans!=INT_MAX)dp[i]=ans;
	}
	cout<<dp[n];
	
}

int main(){
	fio;
	work();
	return 0;
}