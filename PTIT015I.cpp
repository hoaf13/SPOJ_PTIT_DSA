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
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n];
		int t;
		cin>>t;
		for (int i=0;i<n;i++) cin>>a[i];
		int dem=0;
		int i=0;
		while(1){
			if (t<=0) break;
			if (t-a[i]>=0){
				t=t-a[i];
				i++;
				dem++;
			}else t=t-a[i];
		}
		cout<<dem<<endl;
	}
 
return 0;
}
 
