#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	long m;
	cin >> n >> m;
	int a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	int res = 0;
	for (int i=0;i<n-2;i++){
		for (int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if (a[i]+a[j]+a[k]<=m && a[i]+a[j]+a[k] > res ){
					res =a[i]+a[j]+a[k];
				}
			}
		}
	}
	cout << res ;
return 0;
}
 
