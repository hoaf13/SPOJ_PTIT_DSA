#include <bits/stdc++.h>
using namespace std;
long long a[100006];
main(){
	long long n;
	cin>>n;
	for(long long i=0;i<=n;i++){
		cin>>a[i];
	}
	long long nho=0;
	for(long long i=n;i>=1;i--){
		if((a[i]+nho)%i==0){
			nho+=(a[i]+nho)/i;
		}else{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
} 
