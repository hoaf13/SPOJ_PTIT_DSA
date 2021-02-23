 
#include<iostream>
using namespace std;
int main(){
	int a[50],i,n;
	bool flag=true;
	string s;
	cin>>n;
	cin>>s;
	for (i=97;i<=122;i++) a[i]=0;
	for (i=0;i<n;i++) {
		if(s[i]>=65 && s[i]<=90) s[i]+=32;
	}
	for (i=0;i<n;i++) {
		int t=s[i];
		a[t]++;
	}
	for (i=97;i<=122;i++){
		if(a[i]==0) {
			flag=false;
			break;
		}
	}
	if(flag==true) cout<<"YES"; else cout<<"NO";
	return 0;
} 
