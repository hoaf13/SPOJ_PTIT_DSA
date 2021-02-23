#include<iostream>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int n=a.length(),m=b.length(),i,j,vitri,vitri1;
	for (i=0;i<a.length();i++){
		bool flag=false;
		for (j=0;j<b.length();j++)
			 if(a[i]==b[j]){
				flag=true;
				vitri=j;			
				vitri1=i;		
				break;
			}
		if(flag==true) break;
	}
	for (i=0;i<m;i++){
		if(i==vitri) {
			cout<<a;
			cout<<endl;
		}
		else{
			for (j=0;j<vitri1;j++)
				cout<<".";
			cout<<b[i];
			for (j=vitri1+1;j<n;j++) cout<<".";
			cout<<endl;
		}
	}
	return 0;
} 
