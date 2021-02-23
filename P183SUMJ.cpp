#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
bool check(int x,int b[],int m){
	for (int i=1;i<=m;i++){
		if (x==b[i]) return true;
	}
	return false;
}
 
int main(){
	int n,m;
	cin>>n>>m;
	int a[11];
	int b[11];
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=m;i++) cin>>b[i];
	vi arr;
	for (int i=1;i<=n;i++){
		if(check(a[i],b,m)) arr.push_back(a[i]);
	}
	for (int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
return 0;
}
 
