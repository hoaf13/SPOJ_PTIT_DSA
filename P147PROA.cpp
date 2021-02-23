#include<stdio.h>
#include<math.h>
 
int main(){
	int m1,m2,m3;
	float a,b,c; 
	scanf("%d%d%d",&m1,&m2,&m3);
	b=sqrt((float)(m2*m3)/m1);
	a=b*((float)(m1)/m2);
	c=(float)(m2/b);
	printf("%g",4*(a+b+c));
		return 0;
} 
