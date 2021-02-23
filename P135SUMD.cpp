#include<stdio.h>
#include<math.h>
 
int main(){
	int k,dem=0,kq=0,n,l,mieng;
	scanf("%d",&k);
	n=(log(k)/log(2))+1;
	l=pow(2,n);
	mieng=l;
	while(kq!=k,l>0){
		if(kq==k) break;
		if( kq+l/2<=k) {
			kq+=l/2;
		}
		l=l/2;
		dem++;
	}
	if(dem==1) printf("%d 0",mieng/2);
	else
	printf("%d %d",mieng,dem);
	return 0;
} 
