#include<stdio.h>
 
int main(){
	int n;
	scanf("%d",&n);
	int i,dem=1,a[n],c;
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	c=a[0]%10;
	for (i=1;i<n;i++) 
	{
		int t=a[i]/10;
		if(t==c) dem++;
		c=a[i]%10;
	}
	printf("%d",dem);
} 
