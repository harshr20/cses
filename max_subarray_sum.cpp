#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
const int MOD = 1e9 + 7;

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define itr(c, it)       for (auto it = c.begin(); it != c.end(); it++)
#define lop(i, n)        for (int i = 0; i < (n); i++)
#define inp(x)           for (auto &inps : x)cin >> inps
#define raise(n,m)       int(pow(n,m))
#define out(x)           for (auto outps : x)cout << outps <<" " 

void work(){
	// code from here
	ll n;
	cin>>n;
	vi v(n);
	inp(v);

	ll max_sum = 0,cur_sum = 0;
	lop(i,n){
		if(v[i]+cur_sum<0){
			max_sum = max(max_sum,cur_sum);
			cur_sum = 0;
		}
		cur_sum += v[i];
	}
	cout<<max_sum;
}

int main(){
	fio;
	work();
	return 0;
}