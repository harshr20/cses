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
	ll n,m;
	cin>>n>>m;
	vll rate(n), cust(m);
	inp(rate);
	inp(cust);
	sort(rate.begin(),rate.end());
	//cout<<*lower_bound(rate.begin(),rate.end());
	ll i = 0;
	while(i<m){
		auto idx = upper_bound(rate.begin(),rate.end(),cust[i++]);
		if(idx == rate.end()){
			cout<<-1<<endl;
			continue;
		}
		cout<<ll(*idx)<<endl;
		rate.erase(idx);
	} 
	while(i++<m)cout<<-1<<endl;
	
	
}

int main(){
	fio;
	work();
	return 0;
}