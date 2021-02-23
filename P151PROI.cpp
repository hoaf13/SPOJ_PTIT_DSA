#include<stdio.h>
int nen(long n){
	long m=n;
	int s=0;
	while(m>0){
		s+=m%10;
		m=m/10;
	}
	return s;
}
 
int main(){
	long n;
	int T,k=0;
	scanf("%d",&T);
	while(k<T){
		k++;
		scanf("%ld",&n);
		int d=nen(n);
		while (d>=10){
			nen(d);
			d=nen(d);
		}
		printf("%d\n",d);
	}
 
	
return 0;
}
 
