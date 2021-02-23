#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int n;
	cin>>n;
	ll a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	bool flag=true;
	int dem=1;
	vector<ll> ds;
	ds.push_back(a[0]);
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			dem++;
			ds.push_back(a[i]);
		} 
		if (dem==4){
			cout<<"NO";
			flag=false;
			return 0;
		}
	}
	if (dem<3){
		cout<<"YES";
		return 0;
	}
	if (flag){
		sort(ds.begin(),ds.end());
		if (ds[1]-ds[0]==ds[2]-ds[1]){
			cout<<"YES";
			return 0;
		}else {
			cout<<"NO";
			return 0;
		}
	}else{
		cout<<"NO";
		return 0;
	} 
return 0;
}
 
