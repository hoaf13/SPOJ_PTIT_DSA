#include<stdio.h>
#define du 100000007
int main(){
	int a,b,c;
	while (1){
		scanf("%d%d%d",&a,&b,&c);
		if (a==0 && b==0 && c==0  ) break;
			if ((a*a)%du + (b*b)%du == (c*c)%du || (a*a)%du + (c*c)%du == (b*b)%du || (b*b)%du + (c*c)%du == (a*a)%du) printf("right\n");
			else printf("wrong\n");
	}
return 0;
}
 
