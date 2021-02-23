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
 
int arr[1000006];
void init (){
	int n = 1000000;
	for (int i=1; i<= n; i++)
		arr[i]=0;
	arr[0]=0;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n/i; j++){
			arr[j*i]+=i;
		}
	}
}
 
int main (){
	int L, R;
	cin>>L>>R;
	init ();
	int dem=0;
	for (int i=L; i<=R; i++){
		if (arr[i]-i>i) dem++;
	}
	cout<<dem;
	return 0;
} 
