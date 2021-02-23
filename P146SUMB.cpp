#include<stdio.h>
 
int main(){
	int n,i,j,k,l;
	scanf("%d",&n);
	for (i=0;i<=n;i++){
		for (j=0;j<n-i;j++){
			printf("  ");
		}
		for (k=0;k<i;k++){
			printf("%d ",k);
		}
		for (l=k;l>=0;l--){
			printf("%d ",l);
		}
		printf("\n");
	}
for (i=n-1;i>=0;i--){
		for (j=n-i;j>0;j--){
			printf("  ");
		}
		for (k=0;k<i;k++){
			printf("%d ",k);
		}
		for (l=k;l>=0;l--){
			printf("%d ",l);
		}
		printf("\n");
	}
return 0;
}
 
