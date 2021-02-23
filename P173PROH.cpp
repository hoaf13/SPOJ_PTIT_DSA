#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int uoc(ll n){
	long i;
	int dem=0; 
	for ( i=2; i<sqrt(n); i++){
		if (n%i==0){
			if (i%2==0) dem++;
			if ((n/i)%2==0) dem++;
		}
	} 
	if ((n/(int)(sqrt(n)))==sqrt(n) && (int)(sqrt(n))%2==0 ) dem++;
	if (n%2==0) dem++;
	return dem;
}
 
int main(){
	int T;
	cin>>T;
	while(T--){
		ll n;
		cin>>n;
		cout<<uoc(n)<<endl;;
	}
 
return 0;
}
 
