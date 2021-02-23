#include<iostream>
using namespace std;
int main(){
	int n,k=0;
	cin>>n;
	int dem=0;
	while(k<n){
		k++;
		int d=0;
		for (int i=0;i<3;i++){
			int m;
			cin>>m;
			if (m==1) d++;
		}
		if (d>1) dem++;
	}
	cout<<dem;
return 0;
}
 
