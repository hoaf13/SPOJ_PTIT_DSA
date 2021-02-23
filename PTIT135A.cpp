#include<stdio.h>
 
int main(){
	int aa,bb,c;
	int dem[101];
	int i,j;
	for (i=1;i<=100;i++) dem[i]=0;
	scanf("%d%d%d",&aa,&bb,&c);
	int a[4],b[4];
	for(i=1;i<=3;i++){
		scanf("%d%d",&a[i],&b[i]);
		for (j=a[i];j<b[i];j++){
			dem[j]++;
		}
	}
	int tien=0;
	for(i=1;i<=100;i++) {
		if(dem[i]==1) tien+=aa;
		else if(dem[i]==2) tien+=2*bb;
		else if(dem[i]==3) tien+=3*c;
	}
	printf("%d",tien);
return 0;
}
 
