#include<stdio.h>
 
 
int main(){
	long long l1, l2, r2, r1, k, res = 0;
	scanf("%lld%lld%lld%lld%lld",&l1,&r1,&l2,&r2,&k);
	
	if(l1>= l2 && r1<= r2 && l1<= r2){
		res = r1-l1+1;
		if(k<= r1 && k>= l1) res--;
	}
	
	if(l1<= l2 && l2<= r1 && r2<= r1){
		res = r2-l2+1;
		if(k<= r2 && k>= l2) res--;
	}
	
	if(l1>= l2 && l1<= r2 && r1>= r2){
		res = r2-l1+1;
		if(k<= r2 && k>= l1) res--;
	}
	
	if(l1<= l2 && r1<= r2 && l2<= r1){
		res = r1-l2+1;
		if(k<= r1 && k>= l2) res--;
	}
	
	printf("%lld",res);
	
	return 0;
} 
