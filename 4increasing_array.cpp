#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
const int MOD = 1e9 + 7;

#define itr(c, it)       for (auto it = c.begin(); it != c.end(); it++)
#define lop(i, n)        for (int i = 0; i < (n); i++)
#define inp(x)           for (auto &inps : x)cin >> inps
#define out(x)           for (auto outps : x)cout << outps <<" " 


void work(){
  // code from here
  long long n;
  cin>>n;
  vi v(n);
  inp(v);
  long long cost = 0;
  lop(i,n-1){
	cost+=max(v[i]-v[i+1],0);
	v[i+1]=max(v[i+1],v[i]);
  }
  cout<<cost;
  
}

int main(){
  work();
  return 0;
}