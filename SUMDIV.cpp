#include<stdio.h> 
#include<math.h> 
void xuly(long long n) 
{ 	
	int i;
	long long dem=1; 
	for ( i=2; i<sqrt(n); i++) 
	if ((n%i)==0) 
		dem=dem+i+n/i; 
	if ((n/(int)(sqrt(n)))==sqrt(n)) 
		dem=dem+(int)sqrt(n); 
	if (n!=1) 
	printf("%lld\n", dem+n); 
	else printf("1\n"); 
} 
main() 
{ 
	int s,i; 
	long long n; 
	scanf ("%d", &s); 
	for ( i=1; i<=s; i++) 
	{ 
	scanf("%lld", &n); 
	xuly(n); 
	} 
}  
