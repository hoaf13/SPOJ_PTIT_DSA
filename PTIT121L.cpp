#include <iostream>
using namespace std;
int main(){
	long long arr[6];
	long long max=0;
	for (int i=0;i<6;i++) {
		scanf("%lld",&arr[i]);
		if (max<arr[i]) max=arr[i];
	}
	long long mul=arr[0]*arr[1]+arr[2]*arr[3]+arr[4]*arr[5];
	if(mul== max*max){
		cout<<max;
	}else cout<<"0";
	return 0;
} 
