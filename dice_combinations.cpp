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
	ll i;
	cin>>i;
	vector<ll> v(i+1);
	v[0]=0;
	v[1]=1; //1
	v[2]=2;	//11 2
	v[3]=4;	//111 12 21 3
	v[4] = 8; // 1111 121 112 211 13 31 4
	v[5]=16;	//11111 1112*4 122*3 113*3 14*2 
	v[6]=32;
	for(int n = 7;n<i+1;n++)
	v[n]= (v[n-1]+v[n-2]+v[n-3]+v[n-4]+v[n-5]+v[n-6])%MOD;
	cout<<v[i];
}

int main(){
	fio;
	work();
	return 0;
}