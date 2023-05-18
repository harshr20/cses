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
	ll n,x;
	cin>>n>>x;
	vll v(n);
	inp(v);
	sort(v.begin(),v.end());

	ll i = 0 , j = v.size()-1,cnt = 0;
	while(i<j){
		ll total_wt = v[i] + v[j];
		if(total_wt<=x){
			cnt++;
			i++;j--;
		}
		else{
			j--;
			cnt++;
		}
	}

	if(i == j)cnt++;
	cout<<cnt;

	
}

int main(){
	fio;
	work();
	return 0;
}