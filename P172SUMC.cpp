#include<stdio.h>
#include<math.h>
int main(){
	long n;
	scanf("%ld",&n);
	if (n%4==0){
		printf("6");
	}
	if ((n+1)%4==0){
		printf("2");
	}
	if ((n+2)%4==0){
		printf("4");
	}
	if ((n+3)%4==0){
		printf("8");
	}
return 0;
}
 
