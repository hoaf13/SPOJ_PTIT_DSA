#include<iostream>
 
#define ll long long
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		float a;
		cin>>a;
		float canh = 2.0/(1.0-(a/180.0));
		int ep = canh;
		if (ep*1000==canh*1000) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}
 
