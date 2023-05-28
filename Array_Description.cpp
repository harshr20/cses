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
int solve(int m,vi v, int i){
	if(i == -1 || v[i]>m )return 0;
	if(v[i]!=0)return solve(m,v,i-1);
	v[i]=v[i]
	return 
	
}
void work(){
	// code from here
	int n,m;
	cin>>n>>m;
	vi v(n);
	inp(v);
	
}

int main(){
	fio;
	work();
	return 0;
}