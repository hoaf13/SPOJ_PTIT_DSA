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
	long s[n+1][12];
	for(int i=1;i<=n;i++){
		for (int j=1;j<=11;j++){
			cin>>s[i][j];
		}
	}
	ll res=0;
	for (int i=1;i<=n-2;i++){
		for (int j=i+1;j<=n-1;j++){
			for(int k=j+1;k<=n;k++){
				ll tong=0;
				for(int u=1;u<=11;u++){
					tong+=max(s[i][u],max(s[j][u],s[k][u]));	
				}
				res=max(res,tong);
			}
		}
	}
	cout<<res;
return 0;
}
 
