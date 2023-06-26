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

vector<pii> nieghbours(int i,int j,int n,int m){
	vector<pii> nieg;
	if(i-1>-1)nieg.push_back(make_pair(i-1,j));
	if(i+1<n)nieg.push_back(make_pair(i+1,j));
	if(j-1>-1)nieg.push_back(make_pair(i,j-1));
	if(j+1<m)nieg.push_back(make_pair(i,j+1));
	return nieg;
}
void dfs(vector<vector<char>> &v,int i,int j,int n,int m){
	stack<pii> s;
	s.push(make_pair(i,j));
	v[i][j]='#';
	while(!s.empty()){
		i=s.top().first,j=s.top().second;
		vector<pii> nieg=nieghbours(i,j,n,m);
		//cout<<i<<" "<<j<<endl;
		s.pop();
		for(auto x:nieg){
			int ii=x.first,jj=x.second;
			if(v[ii][jj]=='#')continue;
			v[ii][jj]='#';
			s.push(x);
		}
	}
}
void work(){
	// code from here
	int n,m,room=0;
	cin>>n>>m;
	vector<vector<char>> grid(n,vector<char> (m));
	lop(i,n)lop(j,m)cin>>grid[i][j];

	lop(i,n){
		lop(j,m){
			if(grid[i][j]=='#')continue;
			else{
				dfs(grid,i,j,n,m);
				cout<<endl;
				room++;
			}
		}
	}
	cout<<room;
}


int main(){
	fio;
	work();
	return 0;
}