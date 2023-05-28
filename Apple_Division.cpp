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

//seems alright whats the bug
void diff(vll v, ll i, ll dif, ll &min_dif,ll sum){
	if(i == v.size()){
		min_dif=min(min_dif,abs(sum-2*dif));
		return;
	}
	diff(v,i+1,dif,min_dif,sum);
	diff(v,i+1,dif+v[i],min_dif,sum);
}
void work(){
	// code from here
	ll n;
	cin>>n;
	vll v(n);
	inp(v);
	ll sum = 0, min_dif =LLONG_MAX;
	sum = accumulate(v.begin(),v.end(),ll(0));
	//cout<<sum<<endl<<min_dif<<endl;
	diff(v,0,0,min_dif,sum);
	cout<<min_dif;
}

int main(){
	fio;
	work();
	return 0;
}