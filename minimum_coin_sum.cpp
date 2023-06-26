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
	ll n,s=0;
	cin>>n;
	vll v(n);
	inp(v);
	sort(v.begin(),v.end());
	//  1 2 2 7 9
	lop(i,n){
		 if(v[i]>s+1){
			cout<<s+1;
			return;
		}
		s += v[i];
	}
	cout<<s+1;
}

int main(){
	fio;
	work();
	return 0;
}