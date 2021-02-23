#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int sumU=0,sumD=0;
	int minU=50000,minD=50000;
	for (int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		sumU+=a;
		sumD+=b;
		minU=min(minU,a);
		minD=min(minD,b);
	}
	if (sumU<sumD){
		cout<<sumD+minU;
	}else cout<<sumU+minD;
 
} 
