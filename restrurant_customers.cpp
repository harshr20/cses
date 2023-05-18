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
	ll n;
	cin>>n;	
	vll enter(n), exit(n), v(2*n);
	lop(i,n){
		cin>>enter[i]>>exit[i];
		v[2*i]=enter[i],v[2*i+1]=exit[i];
	}
	sort(enter.begin(),enter.end());
	sort(exit.begin(),exit.end());
	sort(v.begin(),v.end());

	ll cnt_max = INT_MIN, i = 0, j = 0, cnt = 0;
	for(auto x:v){
		if(enter[i] == x){
			cnt++;
			i++;
		}
		if(exit[j]==x){
			cnt--;
			j++;
		}
		cnt_max=max(cnt_max,cnt);
	}
	cout<< cnt_max;
}

int main(){
	fio;
	work();
	return 0;
}