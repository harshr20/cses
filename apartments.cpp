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
	ll n,m,k;
	cin>>n>>m>>k;
	vll appl(n),apar(m);
	inp(appl);
	inp(apar);
	sort(appl.begin(),appl.end());
	sort(apar.begin(),apar.end());
	ll i = 0 ,j = 0,cnt = 0;

	while(i<n && j<m){
		ll low = apar[j]-k,high = apar[j]+k,req = appl[i];
		if(req>=low && req<=high){
			cnt++;
			i++;
			j++;
		}
		else if(req>=low){
			j++;
		}
		else if(req<=high){
			i++;
		}
	}
	cout<<cnt++;
}

int main(){
	fio;
	work();
	return 0;
}