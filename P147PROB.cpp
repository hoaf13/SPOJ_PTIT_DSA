#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	double a[n],s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	printf("%.12lf",s/n);
return 0;
}
 
