#include<stdio.h>
 
int kiemtra(long a[], int n){
	int dd=1;
	int i;
	for (i=1;i<n;i++) 
		if(a[i]!=a[0]) dd=0;
	if(dd==1) return 1;
	else return 0;
}
int main(){
	int j=1;
    while(1){
      	int n;
      	scanf("%d",&n);
      	if(n==0) break;
		long a[n],i,dem=0,dem1=0;
		int dd=1;
		for (i=0;i<n;i++) scanf("%ld",&a[i]);
			while(kiemtra(a,n)==0){
				long k=a[0];
				for (i=0;i<n-1;i++)
					a[i]=abs(a[i]-a[i+1]);
				a[n-1]=abs(a[n-1]-k);
				dem1++;
			    if(dem1>1000){
					dd=0;
					printf("Case %d: not attained\n",j);
					break;
			    }
		    }
		    if(dd==1) printf("Case %d: %d iterations\n",j,dem1);
		    j++;
		}
	return 0;
} 
