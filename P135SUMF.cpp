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
	int s=0;
	for (int i=0;i<=n;i++){
		for (int j=i;j<=n;j++){
			s+=i+j;
		}
	}
	cout<<s;
return 0;
}
 
