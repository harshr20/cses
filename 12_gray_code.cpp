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
#define out(x)           for (auto outps : x)cout << outps <<endl

vector<string> gray_code(int n){
	if(n==1){
		vector<string> curr= {"0","1"};
		return curr;
	}
	vector<string> last = gray_code(n-1);
	int nn = last.size();
	vector<string> curr;
	lop(i,nn){
		curr.push_back('0'+last[i]);
	}
	lop(i,nn){
		curr.push_back('1'+last[nn-1-i]);
	}
	return curr;
}
void work(){
	// code from here
	ll n;
	cin>>n;
	out(gray_code(n));
}

int main(){
	fio;
	work();
	return 0;
}