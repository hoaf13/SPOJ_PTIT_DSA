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
	while(1){
		int n;
		cin>>n;
		if (n==0) return 0;
		int dem=1;
		while(n!=1){
			if(n%2==0){
				n=n/2;
				dem++;
			}else{
				n=3*n+1;
				dem++;
			}
		}
		cout<<dem<<endl;
	}
 
return 0;
}
 
