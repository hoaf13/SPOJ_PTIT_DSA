#include<iostream>
#include<math.h>
using namespace std;
void sangNT(int a[],int m){
	int b[m+1]={0};
	for (int i=1;i<=m;i++) a[i]=i;
	for (int i=2;i<=sqrt(m);i++){
		if (b[i]==0){
			for (int j=2;j<=(m)/i;j++){
				b[i*j]=1;
			}
		}
	}
	int dem=0;
	for (int i=1;i<m;i++){
		if (b[i]==0){
			if (a[i]>m/2 && a[i]<m){
				dem++;
			}
		}
	}
	cout<<dem<<endl;
}
int main(){
	while(1){
		int m;
		cin>>m;
		int a[2*m+1];
		if (m==0) return 0;
		if (m==1) cout<<"1"<<endl;
		else sangNT(a,2*m);
	}
return 0;	
}
 
