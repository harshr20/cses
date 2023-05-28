#include <bits/stdc++.h>
#include <cstring>
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

int dp[1001][1001];

ll solve(ll r, ll c,vector<vector<char>> grid){
	if(dp[r][c]!=-1)return dp[r][c]%MOD;
	if(grid[r][c]=='*')return dp[r][c] = 0;
	if(r==0 && c==0)
		return dp[r][c] =1;
	if(r == 0)
		return dp[r][c] = solve(r, c - 1, grid)%MOD;
	if(c == 0)
		return dp[r][c] = solve(r - 1, c, grid)%MOD;

	return dp[r][c] = (solve(r - 1, c, grid) + solve(r, c - 1, grid))%MOD;
}
void work(){
	// code from here
	ll n;
	cin>>n;
	vector<vector<char>> grid(n,vector<char>(n));
	lop(i,n){
		lop(j,n)cin>>grid[i][j];
	}
	/*memset(dp, -1, sizeof(dp[0][0]) * (n + 1) * (n + 1));
	}
	
	cout<<solve(n-1,n-1,grid)%MOD;*/

	int dp[n][n];
	lop(i,n){
		lop(j,n){
			if(grid[i][j]=='*')dp[i][j]=0;
			else if(i == 0 && j == 0)dp[i][j]=1;
			else if(i == 0)dp[i][j]=dp[i][j-1];
			else if(j == 0)dp[i][j]=dp[i-1][j];
			else{
				dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
			}
		}
	}
	cout<<dp[n-1][n-1];
}

int main(){
	fio;
	work();
	return 0;
}