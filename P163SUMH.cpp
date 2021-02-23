#include<stdio.h>
#include<math.h>
 
int main(){
	int i,a,b,dem=0,dem1=0,dem2=0;
	scanf("%d%d",&a,&b);
	for (i=1;i<=6;i++){
		if(abs(i-a)<abs(i-b)) dem++;
		else if(abs(i-a)==abs(i-b))dem1++;
		else dem2++;
	}
	printf("%d %d %d",dem,dem1,dem2);
} 
