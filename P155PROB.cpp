#include<iostream>
using namespace std;
int main(){
	int x,s;
	cin>>x>>s;
	long tong=x*s;
	long a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
		cout<<a[i]-tong<<" ";	
	}
return 0;
}
 
