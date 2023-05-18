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

void n_bit(string s,ll n){
	if(n==0){
		cout<<s<<endl;
		return;
	}
	n_bit(s+"0",n-1);
	n_bit(s+"1",n-1);
}
void work(){
	// code from here
	ll n;
	cin>>n;
	n_bit("",n);
}

int main(){
	fio;
	work();
	return 0;
}