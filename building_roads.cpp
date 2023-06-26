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
#define make_pair(a,b)   mp(a,b)
#define pb(x)            push_back(x)

void dfs(vvi v,int i,vi &visited){
	stack<int> s;
	s.push(i);
	while(!s.empty()){
		int node=s.top();
		s.pop();
		for(auto x:v[node]){
			if(visited[x]==0){
				visited[x]=1;
				s.push(x);
			}
		}
	}
}

void work(){
	// code from here
	int n,m;
	cin>>n>>m;
	// i want n and n-1 roads
	/*if(2*n==m){
		cout<<0;
		return;
	}*/
	vector<vector<int>> v(n+1);
	lop(i,m){
		int a,b;
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	vi visited(n+1,0);
	int ans = 0;
	// cout<<"okay";
	// return;
	vi head;
	lop(i,n){
		if(i==0)continue;
		if(visited[i]==0){
			visited[i]=1;
			head.pb(i);
			dfs(v,i,visited);
			ans++;
		}
	}
	cout<<ans-1<<endl;
	lop(i,ans-1){
		cout<<head[i]<<" "<<head[i+1]<<endl;
	}


}

int main(){
	fio;
	work();
	return 0;
}