#include<stdio.h>
 
int main(){
	long long ax,ay,bx,by,cx,cy;
	scanf("%lld%lld%lld%lld%lld%lld",&ax,&ay,&bx,&by,&cx,&cy);
	long long k=(bx-ax)*(cy-ay)-(cx-ax)*(by-ay);
	if(k==0) printf("TOWARDS");
	else if(k>0) printf("LEFT");
	else printf("RIGHT");
	return 0;
} 
