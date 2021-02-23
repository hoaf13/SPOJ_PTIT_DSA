#include<iostream>
using namespace std;
int main(){
	int a[127]={0},b[127]={0},check[127]={0};
	string s;
	cin>>s;
	int i,j;
	for (i=0;i<s.length();i++){
		if(check[s[i]]==0) {
			a[s[i]]=i;
			check[s[i]]=1;
		}
		else b[s[i]]=i;
	}
	int count=0;
	for (i=65;i<=90;i++)
	{
		for (j=65;j<=90;j++)
			if(a[i]<a[j] && a[j]<b[i] && b[j]>b[i]) count++;
	}
	cout<<count;
	return 0;
}  
