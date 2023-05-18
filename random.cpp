#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
const int MOD = 1e9 + 7;

#define fio                           \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
#define itr(c, it) for (auto it = c.begin(); it != c.end(); it++)
#define lop(i, n) for (int i = 0; i < (n); i++)
#define inp(x)           \
	for (auto &inps : x) \
	cin >> inps
#define raise(n, m) int(pow(n, m))
#define out(x)           \
	for (auto outps : x) \
	cout << outps << " "

void work()
{
	// code from here
	ll n;
	cin >> n;
	vector<ll> v(n);
	inp(v);
	int flag = 1;
	vector<ll> mod(n/2);
	lop(i,n/2){
		//	mod.push_back(0);
		if(v[i] != v[0] || v[i-1] != v[0])flag = 0;
		mod[i]=abs(v[i]-v[n-1-i]);
	}
	if(n==1 || flag){
		cout<<-1<<endl;
		return;
	}
	ll ans= mod[0];
	lop(i,mod.size()-1){
		ans=__gcd(ans,mod[i+1]);
	}
	cout<<ans<<endl;
	
}

int main()
{
	fio;
	ll t;
	cin>>t;
	while(t--)work();
	return 0;
}