#include <bits/stdc++.h>
using namespace std;
void work(){
	char c1,c2;
	long long cur = 1, max_iter =1;
	cin>>c2;
	while(cin>>c1){
		if(c1==c2)cur++;
		else{
			max_iter = max(max_iter,cur);
			cur = 1;
		}
		c2=c1;
	}
	cout<<max(max_iter,cur)<<endl;
}

int main(){
  // code from here
  work();
  return 0;
}