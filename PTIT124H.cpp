#include<stdio.h>
 
int main(){
	int a[4],b[4];
	int i;
	int d1[4],d2[4];
	for (i=1;i<=3;i++){	
		scanf("%d%d",&a[i],&b[i]);
	} 
	
	if (a[1]!=a[2] && a[1]==a[3] ) printf("%d ",a[2]);
	if (a[1]!=a[3] && a[1]==a[2] ) printf("%d ",a[3]);
	if (a[1]!=a[2] && a[2]==a[3] ) printf("%d ",a[1]);
	if (b[1]!=b[2] && b[1]==b[3] ) printf("%d",b[2]);
	if (b[1]!=b[3] && b[1]==b[2] ) printf("%d",b[3]);
	if (b[1]!=b[2] && b[2]==b[3] ) printf("%d",b[1]);
return 0;
}
 
