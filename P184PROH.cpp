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
	long a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	long maxx=a[0];
	long minn=a[0];
	long dis=0;
	for (int i=1;i<n;i++){
		if (a[i]<minn){
			maxx=a[i];
			minn=a[i];
		}else{
			maxx=max(maxx,a[i]);
			dis=max(dis,maxx-minn);
		}
	}
	cout<<dis;
return 0;
}
 
