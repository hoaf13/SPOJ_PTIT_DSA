#include<stdio.h>
 
int main(){
	int x,dem=0,i=1,d=1;
	scanf("%d",&x);
	while(1){
		i++;
		d+=i;
		x=x-d;
		dem++;
		if (x<=0) break;
	}
	printf("%d",dem);
return 0;
}
 
