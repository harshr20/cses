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
#define out(x)           for (auto outps : x)cout << outps <<endl

vector<string> ans;

void generator(string s, vi mp,int x, int n){
	if(s.size()) mp[x]--;
	lop(i,26){
		if(mp[i]>0){
			char c = char('a'+i);
			generator(s+c,mp,i,n);
		}
	}
	if(s.size() == n)ans.push_back(s);
}

void work(){
	// code from hereaabac
	string s;
	getline(cin,s);
	vi mp(26,0);
	lop(i,s.size())mp[s[i]-'a']++;
	generator("",mp,0,s.size());
	cout<<ans.size()<<endl;
	out(ans);
}

int main(){
	fio;
	work();
	return 0;
}