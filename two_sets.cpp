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
/*
void pirint(int st,int end, int n){

	cout << "YES" << endl<< end - st + 1 << endl;
	int x =st;
	while (x <= end)
		cout << x++ << " ";
	cout<<endl;
	cout<<st-1+n-end<<endl;
	x=1;
	while(x<st)cout<<x++<<" ";
	x=end+1;
	while(x<=n)cout<<x++<<" ";

}*/


void print4n(int n){
	cout<<"YES"<<endl<<n/2<<endl;
	for(int i  = 0;i<n/4;i++){
		cout<<4*i+1<<" "<<4*i+4<<" ";
	}
	cout<<endl<<n/2<<endl;
	for(int i  = 0;i<n/4;i++){
		cout<<4*i+2<<" "<<4*i+3<<" ";
	}
}

void print4nplus1(int n){
	cout<<"YES"<<endl<<n/2<<endl;
	for(int i  = 1;i<=n/4;i++){
		cout<<i<<" ";
	}
	for(int i  = n/4;i>0;i--){
		cout<<n-i<<" ";
	}

	cout<<n<<endl<<n/2+1<<endl;
	for(int i = n/4+1;i<=n-1-n/4;i++){
		cout<<i<<" ";
	}

}
void work(){
	// code from here
	ll n;
	cin>>n;
	if(n%4 == 1  || n%4==2){
		cout<<"NO"<<endl;
		return;
	}
	if(n%4==0){
		print4n(n);
	}
	else{
	//	int st=n/2-n/4+1,end=n/2+n/4;
		print4nplus1(n);
	}
	
}

int main(){
	fio;
	work();
	return 0;
}