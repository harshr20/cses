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

void dfs(vector<vector<int>> &graph, int node, int depth, int &maxDepth, vector<bool> &visited)
{
	visited[node] = true;
	maxDepth = max(maxDepth, depth); // Update maxDepth if necessary

	// Traverse all unvisited neighbors of the current node
	for (int neighbor : graph[node])
	{
		if (!visited[neighbor])
		{
			dfs(graph, neighbor, depth + 1, maxDepth, visited);
		}
	}
}

// Function to calculate the maximum depth of the graph from a given point
int findMaximumDepth(vector<vector<int>> &graph, int startNode)
{
	int maxDepth = 0;
	int numNodes = graph.size() - 1; // Adjusting for 1-based index
	vector<bool> visited(numNodes + 1, false);

	// Perform DFS from the starting node
	dfs(graph, startNode, 0, maxDepth, visited);

	return maxDepth;
}

void work(){
	// code from here
	int n;
	vector<vector<int>> v(n+1);
	lop(i,n-1){
		int a, b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	//cout<<findMaximumDepth(v,1)<<endl;
	lop(i,n){
		if(i==0)continue;
		lop(j,v[i].size())cout<<(v[i])[j]<<" ";
		cout<<endl;
	}
}

int main(){
	fio;
	   ll t;
	   cin>>t;
	   while(t--){
		   work();
	   }
	return 0;
}