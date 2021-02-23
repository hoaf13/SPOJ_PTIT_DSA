#include<stdio.h>
#include<math.h>
int main(){
	long a[10];
	int i,j;
	long x,tg,d1,d2;
	for(i=1;i<=3;i++) scanf("%ld",&a[i]);
	for(i=1;i<3;i++){
		for(j=i+1;j<=3;j++){
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	d1=fabs(a[2]-a[1]);
	d2=fabs(a[3]-a[2]);
	if(d1==d2) x=a[3]+d1;
	else if(d2==d1*2) x=a[3]-d1;
	else if(d1==d2*2) x=a[2]-d2;
	printf("%ld",x);
return 0;
}
 
