#include<stdio.h>
 
int main(){
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0) break;
		else if(n==1) printf("1\n");
		else{
			int dem=1;
			while(n!=1){
		         dem++;
		        if(n%2==0) n/=2;
		        else n=n*3+1;
	        }
	        printf("%d\n",dem);
		}
	}
	return 0;
} 
