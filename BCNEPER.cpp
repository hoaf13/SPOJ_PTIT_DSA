#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
void  khoitao(int a[], string num,int n){
	for (int i=0;i<num.length();i++){
		a[i+1]=(num[i]-'0');
	}
}
 
void xuat(int a[],int n,int dem){
	cout<<dem<<" ";
	for (int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
 
bool check(int a[],int n){
	for (int i=1;i<n;i++){
		if (a[i]<a[i+1]) return false;
	}
	return true;
}
 
// 1 2 3 4
// 1 2 4 3
// 1 3 2 4
// 1 3 4 2
// 1 4 2 3
// 1 4 3 2
void sinhlk(int a[],int n,int dem){
	if (check(a,n)==true) cout<<dem<<" "<<"BIGGEST"<<endl;
	while (check(a,n)==false){
		int i;
		for (i=n;i>0;i--){
			if (a[i]>a[i-1]) break;
		}
		i--;
		for (int j=n;j>=i;j--){
			if (a[j]>a[i]){
				swap(a[i],a[j]);
				sort(a+i+1,a+1+n);
				xuat(a,n,dem);
				break;
			}
		}
		break;
	}
}
 
int main(){
	int T;
	cin>>T;
	while(T--){
		int dem;	
		string num;
		int a[90];
		cin>>dem>>num;
		int n=num.length();
		khoitao(a,num,n);
		sinhlk(a,n,dem);
	}
return 0;
}
 
