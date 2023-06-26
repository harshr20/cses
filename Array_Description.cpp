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


//202
// if()
ll ans=0;
void check(vll v,int i,int m){
	if(i==v.size()){
		ans++;
		return;
	}
	//cout<<i<<":";
	//out(v);
	cout<<endl;
	if(v[i]==0){
		v[i]=v[i-1];
		check(v,i+1,m);
		if(v[i-1]>1){
			v[i]=v[i-1]-1;
			check(v,i+1,m);
		}
		if(v[i-1]<m){
			v[i]=v[i-1]+1;
			check(v,i+1,m);
		}
	}
	else{
		if(abs(v[i]-v[i-1])>1)return;
		else check(v,i+1,m);
	}
}
void work(){
	// code from here
	ll n,m;
	cin>>n>>m;
	vll v(n);
	inp(v);

	if(v[0]!=0)check(v,1,m);
	else{
		lop(i,m){
			v[0]=i+1;
			check(v,1,m);
		}
	}
	cout<<ans;
}

int main(){
	fio;
	work();
	return 0;
}