#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int tong(int n){
	int s=0;
	for (int i=1;i<=n;i++){
		s+=i;
	}
	return s;
}
 
int main(){
	int n;
	cin>>n;
	int i=1;
	int dem=0;
	while(1){
		if (n-tong(i)>=0){
			dem++;
			n=n-tong(i);
			i++;
		}else break;
	}
	cout<<dem;
return 0;
}
 
