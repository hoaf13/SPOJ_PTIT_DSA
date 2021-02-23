#include<stdio.h>
 
typedef long long ll;
 
int main(){
	ll n;
	scanf("%lld",&n);
	if(n<3) printf("%lld",n);
	else if(n==4) printf("12");
	else if (n==6) printf("60");	
	else if (n%2!=0) printf("%ld",n*(n-1)*(n-2));
	else if (n%3==0) printf("%ld",(n-1)*(n-2)*(n-3));
	else printf("%ld",n*(n-1)*(n-3));
	return 0;
} 
