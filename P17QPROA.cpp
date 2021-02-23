#include<stdio.h>
#include<math.h>
 
int ktcp(long long n){
	long long k=sqrt(n);
	if(k*k==n) return 1;
	else return 0;
}
 
int main()
{
	int m,k=0;
	scanf("%d",&m);
	while(k<m){
		k++;
		long long x,i,dem=0,j;
		scanf("%lld",&x);
		for (i=1;i<sqrt(x);i++)
		{
			if(ktcp(x-pow(i,2))==1) 
			{
				int dd=1;
				for (j=1;j<i;j++) if(sqrt(x-pow(i,2))==j)
				{
					dd=0;
					break;
				}
				if(dd==1) 
					dem++;
			}
		}
		if(ktcp(x)==1) dem++;
		printf("%lld\n",dem);
	}
} 
