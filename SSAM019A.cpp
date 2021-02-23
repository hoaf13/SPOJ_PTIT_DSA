#include<stdio.h>
#include<math.h>
void xuly(long long n) { 	
	long i;
	long dem=0; 
	for ( i=1; i<sqrt(n); i++) 
	if ((n%i)==0){
		if (i%2==0)	dem++;
		if ((n/i)%2==0)	dem++;
	}
	if ((n/(long)(sqrt(n)))==sqrt(n)) 
		if  (n/(long)(sqrt(n))%2==0){
			dem++;
		}
	printf("%ld\n",dem); 
} 
 
int main(){
	int m;
	scanf("%d",&m);
	int k=0;
	while(k<m){
		k++;
		long long  n;
		scanf("%lld",&n);
		xuly(n);
	}
return 0;
} 
