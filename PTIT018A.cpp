#include<stdio.h>
#include<math.h>
void xuly(long long m,long long n){
	long long i,j,d=0;
	long long s[n];
	long long a[n];
	
	for (i=2;i<=n;i++){
		s[i]=1;
	}
	for(i=2;i<=sqrt(n);i++){
		if (s[i]){
			for (j=2;j<=n/i;j++){
				s[j*i]=0;
			}
		}
	}
	for (i=m;i<=n;i++){
		if (s[i]) a[d++]=i;
	}
	long dem=0;
	for (i=0;i<d-1;i++){
		for(j=i+1;j<d;j++){
			if (a[j]-a[i]==6){
				dem++;
				break;
			}
			if (a[j]-a[i]>6) break;
		}
	}
	printf("%ld\n",dem);
}
 
int main(){
	long long n,m,k,d=0;
	scanf("%lld",&k);
	while(d<k){
		d++;
		scanf("%lld%lld",&m,&n);
		xuly(m,n);
	}
 
	
return 0;
}
 
