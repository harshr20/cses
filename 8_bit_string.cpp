#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
const int MOD = 1e9 + 7;

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define itr(c, it)       for (auto it = c.begin(); it != c.end(); it++)
#define lop(i, n)        for (int i = 0; i < (n); i++)
#define inp(x)           for (auto &inps : x)cin >> inps
#define raise(n,m)       int(pow(n,m))
#define out(x)           for (auto outps : x)cout << outps <<" " 

ll power(ll x, ll y){
	if(y==0)return 1;
	ll h = power(x,y/2);
	if(y%2)return (((h*h)%MOD)*x)%MOD;
	else return (h*h)%MOD;
}
void work(){
	// code from here
	ll n;
	cin>>n;
	cout<<power(2,n);
}

int main(){
	fio;
	work();
	return 0;
}