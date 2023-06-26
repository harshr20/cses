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
#define mp(a,b)		 make_pair(a,b)
#define pb(x)            push_back(x)

bool compare(pii x, pii y){
	int a1=x.first,a2=x.second,b1=y.first,b2=y.second;
	if(a1<b1)return true;
	if(a1>b1)return false;
	if(a2>b2)return true;
	return false;
}

void work(){
	// code from here
	ll n;
	cin>>n;
	//n^2 gg
	vector<pii> v(n);
	lop(i,n){
		int x,y;
		cin>>x>>y;
		v[i]=mp(x,y);
	}
	sort(v.begin(),v.end(),compare);
	int r_largest=0;
	vi contained(n,0),contains(n,0);
	lop(i,n){
		if(v[i].second<=r_largest)contained[i]=1;
		r_largest=max(r_largest,v[i].second);
	}
	int r_smallest=INT_MAX;
	lop(i,n){
		if(r_smallest<=v[n-1-i].second)contains[n-1-i]=1;
		r_smallest=min(r_smallest,v[n-1-i].second);
	}
	lop(i,n){
		cout<<v[i].first<<" "<<v[i].second;
		cout<<endl;
	}
	cout<<endl;
	out(contains);
	cout<<endl;
	out(contained);
	// argsort
	

}
// leave and go college please not stay here
int main(){
	fio;
	work();
	return 0;
}