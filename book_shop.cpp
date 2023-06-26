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
	ll n,x;
	cin>>n>>x;
	vll price(n),pages(n);
	inp(price);
	inp(pages);
	// n(x,i)=max(n(x-pr(i),i-1), b=n(x,i-1))
	// pagem(x,i)=max(pagem(x-pr(i),i-1),pagem(x,i-1))
	// cout<<solve(price,pages,n,x);
	vll prev(x+1,0),pres(x+1);
	lop(i,n){
		lop(j,x+1){
			if (j==0){
				pres[j]=0;
				continue;
			}
			if(j-price[i]>=0)
			pres[j]=max(prev[j],pages[i]+prev[j-price[i]]);
			else
			pres[j]=prev[j];
		}
		prev=pres;
		lop(i,x+1)pres[i]=0;
	}
	cout<<prev[x];
}

int main(){
	fio;
	work();
	return 0;
}