#include<iostream>
using namespace std;
int main(){
	int n,k,i,dem=0;
	cin>>n>>k;
	int a[n];
	for (i=1;i<=n;i++){
		cin>>a[i];
	}
	for (i=1;i<=n;i++){
		 if(a[i]>=a[k] && a[i]>0) dem++;
	}
	cout<<dem;
} 
