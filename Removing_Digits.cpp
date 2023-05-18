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

2
ll min_dig(ll n){
	if(n==0)return 0;
	if(n<0) return INT_MAX;
	ll n_dup=n, ans = INT_MAX;
	
	while(n_dup){
		ll d = n_dup%10;
		if(d!=0)ans =min(ans,1+min_dig(n-d));
		n_dup/=10;
	}
	return ans;
}
void work(){
	// code from here
	ll n;
	cin>>n;
	//cout<<min_dig(n);
	vi v(n+1,0);


	
}

int main(){
	fio;
	work();
	return 0;
}