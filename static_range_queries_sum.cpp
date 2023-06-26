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

void work(){
	// code from here
	
}

int main(){
	fio;
	ll n,q,last;
	cin>>n>>q;
	vll sum(n+1);
	sum[0]=0;
	lop(i,n+1){
		 if(i==0)continue;
		cin>>last;
		sum[i]=sum[i-1]+last;
	}
	int a, b;
	lop(i,q){
		cin>> a>>b;
		cout<<sum[b]-sum[a-1]<<endl;
	}
	return 0;
}