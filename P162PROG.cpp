#include <iostream>
using namespace std;
 
int main (){
	long long n;
	cin>>n;
	int dem=0;
	while(n>0){
		dem++;
		long long vk=1;
		while(1){
			if (2*vk>n) break;
			vk=vk*2;
		}
		n=n-vk;
	}
	cout<<dem;
	return 0;
} 
