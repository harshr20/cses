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

void work(){
	// code from here
	ll n, tar;
	cin>>n>>tar;
	vll v(n);
	inp(v);

	int dp[tar+1][n];
	for(int i = 0;i<n;i++)dp[0][i]=1;
	lop(i,tar+1)dp[i][0]=1;

	for(int i = 1;i<tar+1;i++){
		for(int j =1;j<n;j++){
			
		}
	}
}

int main(){
	fio;
	work();
	return 0;
}