#include<stdio.h>
#include<math.h>
int main(){
	int n,m,i,j,k,tinh;
	scanf("%d%d",&n,&m);
	scanf("%d",&j);
	int a[j];
	for (i=1;i<=j;i++) scanf("%d",&a[i]);
	int dau=1,cuoi=m,dem=0;
	for (i=1;i<=j;i++){
		if (a[i]<=cuoi && a[i]>=dau) continue;
		else{
			if (abs(a[i]-dau) > abs(a[i]-cuoi)){
				tinh=abs(a[i]-cuoi);
			}else tinh=abs(a[i]-dau);
        	dem+=tinh;
    		if (a[i] < dau){
            	dau-=tinh;
                cuoi-=tinh;
            }
            else{
            	dau+=tinh;
            	cuoi+=tinh;
            }
		}
	}
	printf("%d",dem);
return 0;
}
 
