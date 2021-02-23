#include<stdio.h>
 
int main(){
	int s,n,i,j;
	int dd=1;
	scanf("%d%d",&s,&n);
	int a[n],b[n];
	for (i=0;i<n;i++) scanf("%d%d",&a[i],&b[i]);
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++)
		  if(a[i]>a[j]) {
		  	long tg1;
				tg1=a[i];
				a[i]=a[j];
				a[j]=tg1;	
		  	long tg2;
				tg2=b[i];
				b[i]=b[j];
				b[j]=tg2;
		  }
	}
	for (i=0;i<n;i++){
		if (s>a[i]){
			s+=b[i];
		}
		if (s<=a[i]) {
			printf("NO");
			break;
		}
		if (i==n-1) printf("YES");
	}
return 0;
} 
