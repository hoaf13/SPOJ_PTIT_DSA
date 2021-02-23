#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	int n,i,j,dem=0;
	cin>>n;
	int a[1003],b[1003]={0};
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++)
		 if(a[j]>a[i] && b[j]==0){
		 	dem++;
		 	b[j]=1;
		 	break;
		 }
	}
	cout<<dem;
return 0;
}
 
