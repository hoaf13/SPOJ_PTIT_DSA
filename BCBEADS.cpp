#include<stdio.h>
 
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int d=0;
	for (i=0;i<n-1;i++){
		if(a[i]!=a[i+1]) d++;
	}
	printf("%d",d);
return 0;
}
 
