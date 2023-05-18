#include <bits/stdc++.h>
using namespace std;
void work(){
	long long n;
	cin>>n;
	while(n!=1){
		cout<<n<<" ";
		if(n % 2==0)n/=2;
		else n=n*3+1;
	}
	cout<<1;
}

int main(){
  // code from here
  work();
  return 0;
}