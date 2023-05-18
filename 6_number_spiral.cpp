#include <bits/stdc++.h>
using namespace std;
check why prev answer was wrong
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
#define raise(n,m)       ll(pow(n,m))
#define out(x)           for (auto outps : x)cout << outps <<" " 

void work(){
	// code from here
	ll n,m;
	cin>>n>>m;
	if(n>m){
		if(n%2)cout<<(n-1)*(n-1)+m<<endl;
		else cout<<n*n-m+1<<endl;
	}
	else if(m>n){
		if(m%2)cout<<m*m-n+1<<endl;
		else cout<<(m-1)*(m-1)+n<<endl;
	}
	else{
		cout<<m*m-m+1<<endl;
	}
}

int main(){
	ll t;
	cin>>t;
	lop(i,t)
	work();
	return 0;
}
// 3 2 3 1 1 4 2