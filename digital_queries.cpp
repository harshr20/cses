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
#define raise(n,m)       int(ceil(pow(n,m)))
#define out(x)           for (auto outps : x)cout << outps <<" " 

void work(){
	// code from here
	ll n;
	cin>>n;
	ll x=0,i=0,add,prev=1;
	while(1){
		i++;
		add = 9*prev;
		prev *= 10;
		if(x+i*add<n)x+=i*add;
		else break;	
		x%=MOD;
	}
	if (x + i * add == n){
		cout<<9<<endl;
		return;
	}
	n-=x;
	ll y = ceil((1.0*n)/i);
	ll p = raise(10,i-1)-1+y;
	string s = to_string(p);
	cout<<s[(n-1)%i]<<endl;
	
}

int main(){
	fio;
	int n;
	cin>>n;
	while(n--)
	work();
	return 0;
}