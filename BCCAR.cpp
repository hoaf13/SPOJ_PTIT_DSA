#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,k=0;
	cin>>t;
	while(k<t){
		k++;
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++) cin>>a[i];
		int max=a[0];
		int min=a[0];
		for (int i=0;i<n;i++){
			if (a[i]>max) max=a[i];
			if (a[i]<min) min=a[i];
		}
		cout<<(max-min)*2<<endl;
	}
	
return 0;
}
 
