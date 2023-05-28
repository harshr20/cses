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

int solve(int i, int j){
	if(i ==0 && j ==0)return 0;
	if(i == 0){
		int ans = 0;
		lop(k,j)ans=(ans+solve(i,j-k-1))%MOD;
		return ans;
	}
	if(j ==0){
		int ans = 0;
		lop(k,i)ans=(ans+solve(i-k-1,j))%MOD;
		return ans;
	}
	int ans = 0;
	lop(k,i){
		lop(l,j)ans=(ans+ solve(i-k-1,j-l-1))%MOD;
	}
	return ans;
}
void work(){
	// code from here
	int n;
	cin>> n;
	cout<<solve(n,n);
}

int main(){
	fio;
	work();
	return 0;
}