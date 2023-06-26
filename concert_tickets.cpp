#include <bits/stdc++.h>
using namespace std;
//multiset
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

void work(){
	// code from here
	ll n,m;
	cin>>n>>m;
	multiset<ll> ms;
	lop(i,n){
		ll x;
		cin>>x;
		ms.insert(x);
	}	
	lop(i,m){
		ll c;
		cin>>c;
		auto it = ms.upper_bound(c);
		if(it==ms.begin()){
			cout<<-1<<endl;
			
		}
		else{
			cout<<*(--it)<<endl;
			ms.erase(it);
		}
	}
}

int main(){
	fio;
	work();
	return 0;
}