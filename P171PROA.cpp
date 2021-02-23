#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	ull l,r,x,k,t=1;
	bool flag=false;
	cin>>l>>r>>x;
	k=log(r)/log(x);
	if(l==1) cout<<1<<" ";
	for (ll i=0;i<k;i++){
		t*=x;
		if(t>=l && t<=r){
			cout<<t<<" ";
			flag=true;
		}	
	}
	if(flag==false) cout<<"-1";
	return 0;
return 0;
}
 
