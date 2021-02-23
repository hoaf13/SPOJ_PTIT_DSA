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
 
 
main(){
	long n,l,sum,wait,d,r,g;
	cin>>n>>l;
	sum =0;
	for (long i=1;i<=n;i++){
		cin>>d>>r>>g;
		sum+=d;
		wait= sum % (r+g);
		if (wait>=r) wait=r;
		sum+= (r-wait-d);
	}
	sum+=l;
	cout<<sum;
} 
