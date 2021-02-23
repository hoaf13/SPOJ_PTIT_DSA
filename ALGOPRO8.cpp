#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a,b,du;
	if (n>m) a=m;
	else a=n;
	du=abs(n-m);
	b=du/2;
	printf("%d %d",a,b);
return 0;
}
 
