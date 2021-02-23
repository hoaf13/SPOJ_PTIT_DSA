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
 
int main(){
	int n;
	cin>>n;
	int arr[102];
	int d1Bd=0;
	int kt=0;
	for (int i=1; i<=n; i++){
		cin>>arr[i];
		if (arr[i]==1) d1Bd++;
		else kt=1;
	}
	int d1Max=d1Bd;
	if (kt==0){	
		cout<<d1Max-1;
		return 0;
	}
	for (int i=1; i<=n; i++){
		for (int j=i; j<=n; j++){
			int d0=0;
			int d1=0;
			for (int k=i; k<=j; k++){
				if (arr[k]==0) d0++;
				else d1++;
			}
			if ((d0-d1+d1Bd)>d1Max){
				d1Max=(d0-d1+d1Bd);
			}
		}
	}
	cout<<d1Max;
return 0;
}
 
