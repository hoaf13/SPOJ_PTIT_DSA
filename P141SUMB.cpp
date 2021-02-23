#include<stdio.h>
 
 
int main(){
	int n,dem=0;
	scanf("%d",&n);
	int a[10000],b[10000],i;
	for (i=1;i<=n;i++) b[i]=0;
	for (i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
        if(a[i]<=n) b[a[i]]++;
	}
	for (i=1;i<=n;i++) 
		if(b[i]==0) dem++;
    printf("%d",dem);
    return 0;
} 
