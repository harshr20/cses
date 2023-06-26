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
#define mp(a,b)          make_pair(a,b)
#define pb(x)            push_back(x)

ll geometric_sum(ll a,ll b){
	return (raise(a,b+1)-1)/(a-1)%MOD;
}
ll arithmetic_sum(ll a, ll b){
	return a*b*(b+1)/2;
}
void work(){
	// code from here
	ll n;
	cin>>n;
	vector<pii> v(n);
	lop(i,n)cin>>v[i].first>>v[i].second;
	// number of factors
	ll n_factors=1,product_f =1,sum_factors=1;
	lop(i,n){
		n_factors=(n_factors*(v[i].second+1))%MOD;
		// sum_factors=(1+2+2^2...).(1+3+3^2...).
		sum_factors=(sum_factors*geometric_sum(v[i].first,v[i].second))%MOD;
		// product of factors
		// 2 3 - (4) 
		// 3 5 - (6)
		// 5 1 - (2)
		product_f=
	}
	cout<<n_factors<<" "<<sum_factors;
}

int main(){
	fio;
	work();
	return 0;
}