#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
void xuly(long long n,long long x){ 	
	int i;
	int s=0;
	long long dem=1; 
	for ( i=1; i<sqrt(x); i++) 
	if ((x%i)==0){
		if(x/i <= n){
			s+=2;	
		} 	
	}
	if ((x/(int)(sqrt(x)))==sqrt(x)) 
		s++; 
		cout<<s;  
} 
 
int main(){
	int n;
	int dem=0;
	long long x;
	cin>>n>>x;
	xuly(n,x);
return 0;
}
 
