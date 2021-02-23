#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int binarySearch(int a[],int l,int r,int x){
	int res=0;
	while (l<=r){
		int mid=(l+r)/2;
		if (a[mid]<=x){
			l=mid+1;
			res=mid+1;
		}else r=mid-1;
	}
	return res;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	for (int i=0;i<m;i++){
		cout<<binarySearch(a,0,m,b[i])<<endl;
	}
return 0;
}
 
