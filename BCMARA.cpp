#include<stdio.h>
 
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	int i,j;
	for (i=0;i<n;i++){
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (c[i]+b[i]*60+a[i]*60*60 > c[j]+b[j]*60+a[j]*60*60){
				int tg1=a[i];
				a[i]=a[j];
				a[j]=tg1;
				int tg2=b[i];
				b[i]=b[j];
				b[j]=tg2;
				int tg3=c[i];
				c[i]=c[j];
				c[j]=tg3;
			}
		}
	}
	for (i=0;i<n;i++){
		printf("%d %d %d\n",a[i],b[i],c[i]);
	}
return 0;
}
 
