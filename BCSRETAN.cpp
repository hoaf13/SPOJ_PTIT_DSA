#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
void nhiphan(long n){
	int a[100]; //dung mang A de luu gia tri nhi phan
	int i=0;
	while(n>0){
		a[i]=n%2;
		n=n/2;
		i++;
	}			//day nhi phan se bi sap xep nguoc thu tu
	for(int j=i-2;j>=0;j--){ // in theo chieu nguoc lai, bo phan tu dau tien{
		if (a[j]==0) cout<<"4";
		if(a[j]==1) cout<<"7";
	}
}
 
int main(){
	long K;
	cin>>K; //nhap so nguyen K
	nhiphan(K+1);
return 0;
}
 
