#include<iostream>
using namespace std;
int main(){
	int n,i,max,min;
	cin>>n;
	long long a[n+1], b[n+1];
	for (i=1;i<=n;i++) cin>>a[i]>>b[i];
	min=a[1]; max=b[1];
	for (i=1;i<=n;i++){
	   	  if(a[i]<=min) min=a[i];
	   	  if(b[i]>=max) max=b[i];
	}
	int flag=0;
	for (i=1;i<=n;i++){
	  	if(a[i]==min&& b[i]==max) {
	  		flag=1;
	  		cout<<i;
		}
	}
	if(flag==0) cout<<"-1";
	return 0;
} 
