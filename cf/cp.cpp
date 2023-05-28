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
	ll n,k;
	cin>>n>>k;
	vll v(n);
	inp(v);

	sort(v.begin(),v.end());
	//int n =v.size();
	ll i = -1, j=v.size()-k;
	ll l_sum = 0, r_sum =accumulate(v.end()-k,v.end(),ll(0)),tot_sum,real=LLONG_MAX;
	if(k>=n){cout<<0<<endl;return;}
	while(j<=n){
		tot_sum = l_sum + r_sum;
		real = min(real,tot_sum);
		i+=2;
		j++;
		l_sum+=v[i]+v[i-1];
		r_sum -=v[j-1];
	}
	cout<<accumulate(v.begin(),v.end(),ll(0))-real<<endl;
	// 15 22 12 10 13 11
	// 10 11 -12 13 15 -22-
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