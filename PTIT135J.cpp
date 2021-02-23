#include<stdio.h>
#include<math.h>
int main(){
	int T,k=0;
	scanf("%d",&T);
	while(k<T){
		k++;
		double N,L,M;
		scanf("%lf%lf%lf",&N,&L,&M);
		printf("%d\n",(int)((double)(log(M/N))/log(1+L/100.00))+1);
	}
return 0;
}
 
