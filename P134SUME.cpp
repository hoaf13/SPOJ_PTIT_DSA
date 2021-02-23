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
	long a[4],i;
	for (i=0;i<4;i++) cin>>a[i];
	sort(a,a+4);
	cout<<a[0]*a[2];
	return 0;
} 
