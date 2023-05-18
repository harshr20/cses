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
	ll n;
	cin>> n;
	if(n<4 && n>1){
		cout << "NO SOLUTION";
		return;
	}
	if(n == 4){
		cout<<"2 4 1 3";
		return;
	}
	 vi v(n);
	if(n%2){
		lop(i,n){
			if(i%2)v[i]=ceil(n/2)+ceil(i/2)+2;
			else v[i]=ceil(i/2)+1;
		}
	}
	else{
		lop(i,n){
			if(i%2)v[i]=ceil(n/2)+ceil(i/2)+1;
			else v[i]=ceil(i/2)+1;
		}
	}
	
	out(v);
}

int main(){
	work();
	return 0;
}