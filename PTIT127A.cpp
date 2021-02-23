#include<stdio.h>
 
int main(){
	int m,n,k;
	scanf("%d%d%d",&m,&n,&k);
	int max;
	if(m/2 > n)
		max=n; 
	else max=m/2;
	if((m+n-3*max)>=k) printf("%d",max);
	else{
		while(max>=0 && (m+n-3*max)<k) max--;
		printf("%d",max);
	}
	return 0;
} 
