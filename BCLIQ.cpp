#include<stdio.h>
 
int main(){
	int n,lmax,i,j;
	scanf("%d",&n);
	int a[n],l[n];
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);	
	}
	l[1]=1;
	int max=1;
	for (i=2;i<=n;i++){
		lmax=0;
		for (j=1;j<i;j++){
			if (a[i]>a[j])
				if (l[j]>lmax)
					lmax=l[j];
		}
		l[i]=lmax+1;
		if (l[i]>max)  max =l[i];
	}
	printf("%d",max);
	return 0;
}
 
