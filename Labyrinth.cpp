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
//#define make_pair(a,b)   mp(a,b)
#define pb(x)            push_back(x)

class direction{
	public:
	int i;
	int j;
	char c;
	direction(int i,int j,char c){
		this->i=i;
		this->j=j;
		this->c=c;
	}
};
vector<direction> nieghbours(int i,int j,int n,int m){
	vector<direction> nieg;
	if(i-1>-1)nieg.push_back(direction(i-1,j,'U'));
	if(i+1<n)nieg.push_back(direction(i+1,j,'D'));
	if(j-1>-1)nieg.push_back(direction(i,j-1,'L'));
	if(j+1<m)nieg.push_back(direction(i,j+1,'R'));
	return nieg;
}

vector<vector<char>> walk(vector<vector<char>> v,int si,int sj, int ei,int ej,int n,int m){
	vector<vector<char>> walk(n,vector<char> (m,'#'));
	queue<pii> q;
	pii lol = make_pair(si,sj);
	q.push(lol);	
	v[si][sj]='#';
	while(!q.empty()){
		si=q.front().first,sj=q.front().second;
		//cout<<si<<" "<<sj<<endl;
		if(si==ei && ej == sj)break;
		vector<direction> nieg = nieghbours(si,sj,n,m);
		q.pop();
		for(auto x: nieg){
			int ii=x.i,jj=x.j;
			char dir=x.c;
			if(v[ii][jj]=='#')continue;
			walk[ii][jj]=dir;
			v[ii][jj]='#';
			q.push(make_pair(ii,jj));
		}
	}
	return walk;
}
void work(){
	// code from here
	int n,m,sti,stj,eni,enj;
	cin>>n>>m;
	vector<vector<char>> maze(n,vector<char> (m));
	lop(i,n){lop(j,m){
		cin>>maze[i][j];
		if(maze[i][j]=='A'){
			sti=i;
			stj=j;
		}
		if(maze[i][j]=='B'){
			eni=i;
			enj=j;
		}
	}}

	// cout<<sti<<stj<<endl;
	// backtrack crow
	// mereko college jana hai
	// that place is nice and peaceful. unlike this place
	// i like that place better. then job somewhere. but not in daltonganj.
	// tle on 1 tc
	vector<vector<char>> walktree= walk(maze,sti,stj,eni,enj,n,m);
	if(walktree[eni][enj]=='#'){
		cout<<"NO";
		return;
	}
	string s="";
	while(eni!= sti || enj != stj){

		s=walktree[eni][enj]+s;
		if (walktree[eni][enj]=='L')enj++;
		else if (walktree[eni][enj] == 'R')enj--;
		else if (walktree[eni][enj]=='U')eni++;
		else if (walktree[eni][enj]=='D')eni--;
	}
	if(s.size()>0)cout<<"YES"<<endl<<s.size()<<endl;
	
	cout<<s;

}

int main(){
	fio;
	work();
	return 0;
}