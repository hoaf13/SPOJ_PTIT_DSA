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
	long a[n+1];
	for (int i=1;i<=n;i++) cin>>a[i];
	long s=a[1];
	cout<<a[1]<<" ";
	for (int i=2;i<=n;i++){
		cout<<a[i]*i-s<<" ";
		s+=a[i]*i-s;
	} 
return 0;
}
 
