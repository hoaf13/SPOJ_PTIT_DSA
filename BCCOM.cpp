#include<stdio.h>
int nen(int n){
	int s=0;
	while (n>0){
		s+=n%10;
		n/=10;
	}
return s;
}
 
int main(){
	long long n;
	int d,i;
	scanf("%ld",&n);
	int a[n];
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(i=1;i<=n;i++){
	d=nen(a[i]);
	while(d>=10){
		nen(d);
		d=nen(d);
	}
	printf("%d\n",d);
	}
 
 
return 0;
}
 
