#include<stdio.h>
 
int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	if(n==1) printf("1");
	else{
		if(n%2==0){
			if (k<=n/2){
				printf("%lld",k*2-1);
			}else printf("%lld",k-(n-k)); 
		}
		if (n%2!=0){
			if (k<=n/2+1){
				printf("%lld",(k*2-1));
			}else printf("%lld",k-(n+1-k)); 
		}
	}
return 0;
}
 
