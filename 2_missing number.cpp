#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
const int MOD = 1e9 + 7;

#define itr(c, it)       for (auto it = c.begin(); it != c.end(); it++)
#define lop(i, n)        for (int i = 0; i < (n); i++)
#define inp(x)           for (auto &inps : x)cin >> inps
#define raise(n,m)       int(pow(n,m))
#define out(x)           for (auto outps : x)cout << outps <<" " 

void work(){
	// code from here
	ll s = 0,x,n;
	cin>>n;
	lop(i,n-1){
		cin>>x;
		s+=x;
	}
	cout<<n*(n+1)/2-s;
}

int main(){
	work();
	return 0;
}