#include<iostream>
using namespace std;
int main(){
	int t,n,k=0;
	int a[10]={500, 200, 100, 50, 20, 10, 5, 2, 1};
	cin>>t;
	for(int j=0;j<t;j++){
		k++;
		cin>>n;
		int d=0;
		for(int i=0;i<9;i++){
			int m=n/a[i];
			d+=m;
			n=n-a[i]*m;
			if (n==0) break;
		}	
		cout<<d<<"\n";
	}
return 0;
}
 
