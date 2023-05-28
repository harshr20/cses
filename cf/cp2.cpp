#include <bits/stdc++.h>
#include <bitset>
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
/*void generate(int n,vector<string> &ans,string s,int last){
	if(n == 0){
		ans.push_back(s);
		return;
	}
	if(last){
		s='0'+s;
		generate(n-1,ans,s,'0');
	}
	else{
		generate(n-1,ans,'0'+s,'0');
		generate(n-1,ans,'1'+s,'1');
	}
}*/
bool check(int x){
	int last =0,curr;
	while(x){
		curr=x%2;
		if(curr && last)return false;
		x=x/2;
		last=curr;		
	}
	return true;
}
vi work(ll m){
	// code from here
	vector<int> ans;
	int i = 1;
	while(1){
		if(check(i))ans.push_back(i);
		if(ans.size()==m)break;
		i++;
	}
	//cout<<check(1);
	return ans;
	
}
void printBinary(int number)
{
	string s= "";
	while(number){
		s=  (number%2?"1":"0");
		number/=2;
	}
	cout << s<<endl;
}

int main(){
	//work(9);
	fio;
	   ll t;
	   cin>>t;
	   vi v(t);
	   inp(v);
	   ll m = *max_element(v.begin(),v.end());
		vi v2 = work(m);
		lop(i,t){
			int ans = v2[v[i]-1];
			printBinary(ans);
		}
	return 0;
}