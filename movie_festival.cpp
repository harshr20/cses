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

bool comp(pll a,pll b){
	return a.second<b.second;
}
void work(){
	// code from here
	ll n;
	cin>>n;
	vector<pll> v(n);
	lop(i,n)cin>>v[i].first>>v[i].second;
	sort(v.begin(),v.end(),comp);
	ll cnt=0,lst=-1;
	lop(i,n){
		cout<<v[i].first<<" "<<v[i].second<<endl;
		if(lst<=v[i].first){
			lst=v[i].second;
			cnt++;
		}
	}
	cout<<cnt;
}

int main(){
	fio;
	work();
	return 0;
}