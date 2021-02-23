#include<iostream>
 
#define ll long long
using namespace std;
 
int sum(int n){
	int sum=0;
	for (int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}
 
int main(){
	int n;
	cin>>n;
	int dem=0;
	int i=1;
	while(n>0){
		n-=sum(i);
		if(n>=0) dem ++;
		i++;
	}
	cout<<dem;
return 0;
}
 
