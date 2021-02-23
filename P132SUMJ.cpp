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
int arr[1000000];
 
void khoitao(int arr[],int n){
	for(int i=1;i<=n;i++){
		arr[i]=i;
	}
}
 
void xuat(int arr[],int n){
	for (int i=1;i<=n;i++){
		cout<<arr[i];
	}
}
 
bool check(int arr[],int n){
	for (int i=1;i<n;i++){
		if(arr[i]<arr[i+1]) return false;
	}
	return true;
}
// 1 2 3 4
// 1 2 4 3
// 1 3 2 4
// 1 3 4 2
// 1 4 2 3
// 1 4 3 2
 
int main(){
	string s;
	cin>>s;
	int n;
	for(int i=0;i<s.length();i++){
		arr[i+1]=(s[i]-'0');
		n=i+1;
	}
	if (check(arr,n)){
		cout<<0;
		return 0;
	}else{
		while (check(arr,n)==false){
			int i;
			for (i=n;i>0;i--){
				if (arr[i]>arr[i-1]) break;
			}
			i--;
			for (int j=n;j>=i;j--){
				if (arr[j]>arr[i]){
					swap(arr[i],arr[j]);
					sort(arr+i+1,arr+n+1);
					xuat(arr,n);	
					break;
				}
			}
			break;
		}
	}
return 0;
}
 
