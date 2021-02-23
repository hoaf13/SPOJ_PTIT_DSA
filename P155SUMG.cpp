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
	int n,m;
	cin>>m>>n;
	int d=0;
	while(1){
		if (m==0 || n==0 ){
			break;
		}
		n--;
		m--;
		d++;
	}
	if (d%2==0) cout<<"Wilshere";
	else cout<<"Xavi";
return 0;
}
 
