#include<iostream>
using namespace std;
int main(){	
	int T,k=0;
	cin>>T;
	while(k<T){
		k++;
		int n;
		cin>>n;
		int d[n+1];
		for (int i=1;i<=n;i++) d[i]=0; //mo
		int move=1;
		int dem=0;
		while(move<=n){
			move++;
			for (int j=1;j<=n;j++){
				if (j%move==0) d[j]++;
			}
		}
		for (int j=1;j<=n;j++){
			if (d[j]%2==0) dem++;
		}
		cout<<dem<<endl;
	}
return 0;	
}
 
