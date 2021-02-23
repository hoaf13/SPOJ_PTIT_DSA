#include<iostream>
using namespace std;
int main(){
	long a[4];
	for (int i=0;i<4;i++){
		cin>>a[i];
	}
	int d[4]={0};
	int dem=0;
	for (int i=0;i<3;i++){
		if (d[i]==0){
			for (int j=i+1;j<4;j++){
				if (a[i]==a[j]){
					d[j]=1;
					dem++;
				}
			}
		}  
	}
	cout<<dem;
return 0;
}
 
