#include<stdio.h>
 
int main(){
	while(1){
		int n;
		scanf("%d",&n);
		if (n==0) return 0;
		int i,dd=1;
		int a[10005],b[10005];
		for (i=1;i<=49;i++) b[i]=0;
		for (i=1;i<=n*6;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		for(i=1;i<=49;i++){
			if (b[i]==0){
				dd=0;
				break;
			}
		}
		if (dd) printf("Yes\n");
		else printf("No\n");
	}
return 0;
}
 
