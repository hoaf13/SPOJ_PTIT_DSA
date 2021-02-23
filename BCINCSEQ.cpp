#include<stdio.h>
 
int main(){
	long n,i,j,dem=1,max=1;
	scanf("%ld",&n);
	long long a[n];
	for (i=1;i<=n;i++) scanf("%lld",&a[i]);
	for (i=1;i<n;i++){
		if (a[i]<=a[i+1]) {
			dem++;	
			if(max<dem) {
				max=dem;
			}
		}else dem=1;
	}
	printf("%ld",max);
return 0;
}
 
