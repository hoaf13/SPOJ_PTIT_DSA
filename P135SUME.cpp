#include<stdio.h>
 
int main(){
	int a[8],i,j,dem1=0,dem2=0;
	for (i=0;i<8;i++) scanf("%d",&a[i]);
	for (i=0;i<7;i++){
	  	if(a[i]<a[i+1]) dem1++;
	  	else dem2++;
	  }
	if(dem1==7) printf("ascending");
	else if(dem2==7) printf("descending");
	else printf("mixed");
	return 0;
} 
