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
 
 
int main (){
	int n, m;
	cin>>n>>m;
	int arr[55];
	for (int i=1; i<=m ; i++){
		cin>>arr[i];
	}
	sort (arr+1, arr+m+1);
	int hieu=2000;
	for (int i=1;i<=m-n+1;i++){
		int minus = arr[i+n-1]-arr[i];
		hieu=min(hieu,minus);
	}
	cout<<hieu;
	return 0;
}
 
