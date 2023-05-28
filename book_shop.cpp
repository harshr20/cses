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

unordered_map<pii,int> m;
int solve(vi price,vi pages,int i, int x){
	if(i == -1 || x == 0)return 0;
	
	int sub_price = x - price[i];
	if(sub_price>=0){
		pii p1 = make_pair(i-1,sub_price),p2 = make_pair(i-1,x), p3 =make_pair(i,x);
		if(m.find(p3)==m.end())m[p3]=max(solve(price,pages,i-1,x-price[i])+pages[i],solve(price,pages,i-1,x));
		return m[p3];
	}
	else{
		pii p2 = make_pair(i-1,x), p3 =make_pair(i,x);
		if(m.find(p3)==m.end())m[p3]=solve(price,pages,i-1,x);
		return m[p3];
	}
}
void work(){
	// code from here
	int n, x;
	cin>>n>>x;
	vi price(n);
	vi pages(n);
	inp(price);
	inp(pages);
	/*int p[n+1][x+1];
	lop(i,n+1){
		lop(j,x+1){
			if(i==0 || j==0)p[i][j]=0;
			else{
				if(j-price[i-1]>=0)p[i][j]=max(p[i-1][j],p[i-1][j-price[i-1]]+pages[i-1])%MOD;
				else p[i][j]=p[i-1][j];
				cout<<i<<" "<<j<<endl;
			}
		}
	}

	cout<<p[n][x];*/
	cout<<solve(price,pages,n-1,x);
}

int main(){
	fio;
	work();
	return 0;
}