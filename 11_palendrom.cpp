#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
const int MOD = 1e9 + 7;

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define itr(c, it)       for (auto it = c.begin(); it != c.end(); it++)
#define lop(i, n)        for (int i = 0; i < (n); i++)
#define inp(x)           for (auto &inps : x)cin >> inps
#define raise(n,m)       int(pow(n,m))
#define out(x)           for (auto outps : x)cout << outps 

void stick(char c,int cnt,int idx, vector<char> &v){
	lop(i,cnt/2){
		v[idx]=c;
		v[v.size()-1-idx]=c;
		idx++;
	}

}
void work(){
	// code from here
	char x;
	ll n=0;
	vi v(26);
	while(cin>>x){
		v[x-'A']++;
		n++;
	}
	vector<char> ans(n);
	int flag = 0,idx = 0;
	lop(i,26){
		int iter = v[i];
		if(iter%2){
			if(n%2 == 0 || flag){
				cout << "NO SOLUTION";
				return;
			}
			else {
				flag=1;
				iter--;
				ans[n/2]='A'+i;
			}
		}
	lop(j,iter/2){
			ans[idx]='A'+i;
			ans[n-1-idx]='A'+i;
			idx++;
		}
	}
	out(ans);
}

int main(){
	fio;
	work();
	return 0;
}