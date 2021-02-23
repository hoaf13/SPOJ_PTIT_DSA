#include<stdio.h>
 
int main(){
	long n,c;
	scanf("%ld%ld",&n,&c);
	long dem[c+1];
	long i,l;
	long a[n+1];
	for (i=1;i<=n;i++){
		scanf("%ld",&a[i]);
	}
	long m;
	scanf("%ld",&m);
	for (i=0;i<m;i++){
		for(l=1;l<=c;l++) dem[l]=0;
		long x,y;
		scanf("%ld%ld",&x,&y);
		long j;
		long max=0;
		long index;
		for (j=x;j<=y;j++){
			dem[a[j]]++;
			if (dem[a[j]]>max){
				max=dem[a[j]];
				index=j;
			} 
		}
		long k=(y-x+1)/2;
		if (max>k) {
			printf("yes %ld\n",a[index]);
		}else printf("no\n");
	}
return 0;
}
 
