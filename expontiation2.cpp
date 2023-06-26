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

ll solve(ll a,ll b){
	if(a==0 && b)return 0;
	if(b==0 || a==0)return 1;
	ll lol = solve(a,b/2)%MOD;
	if(b%2)return (((lol*lol)%MOD)*a)%MOD;
	else return (lol*lol)%MOD;
}
void work(){
	// code from here
	ll a,b,c;
	cin>>a>>b>>c;
	cout<<solve(a,solve(b,c))<<endl;
	//cout<<solve(solve(a, b), c)<< " "<<solve(a,solve(b,c));
}

int main(){
	fio;
	   ll t;
	   cin>>t;
	   while(t--){
		   work();
	   }
	return 0;
}