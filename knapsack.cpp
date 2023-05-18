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

int dp[1000][1000];
memset(-1,sizeof(dp));
ll knapsack(vll w,vll p ,int i, ll wt){
	if(wt == 0 || i == -1)return 0;
	if(wt-w[i]>=0){
		return max(knapsack(w,p,i-1,wt),p[i]+knapsack(w,p,i-1,wt - w[i]));
	}
	else return knapsack(w,p,i-1,wt);
}
void work(){
	// code from here
	// knapsack
	ll n,bag;
	cin>>n>>bag;
	vll w(n),p(n);
	inp(w);
	inp(p);
	// 0 / 1 knapsack
	cout<< knapsack(w,p,n-1,bag);
}

int main(){
	fio;
	work();
	return 0;
}