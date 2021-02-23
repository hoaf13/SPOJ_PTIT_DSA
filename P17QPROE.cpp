#include<iostream>
using namespace std;
bool check(int a[],int n ){
	for(int i=0;i<n;i++){
		if (a[i]!=a[n-1-i]) return false;
	}
	return true;
}
 
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	int l=0,r=n-1;
	int dem=0;
	while(l<r){
		if (check(a,n)){
			cout<<dem;
			return 0;
		}
		else{
			if (a[l]==a[r]){
				l++;
				r--;
			}
			else if (a[l]<a[r]){
				a[l+1]=a[l]+a[l+1];
				dem++;
				l++;
			}
			else{
				a[r-1]=a[r]+a[r-1];
				dem++;
				r--;
			}
		}
	}
	cout<<dem;
return 0;
}
 
