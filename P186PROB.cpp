#include<stdio.h>
 
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1],i;
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	int m;
	scanf("%d",&m);
	int x[m+1],y[m+1];
	for(i=1;i<=m;i++) scanf("%d%d",&x[i],&y[i]);
	
 
	
	for(i=1;i<=m;i++){
		a[x[i]+1]+=a[x[i]]-y[i];
		a[x[i]-1]+=y[i]-1;
		a[x[i]]=0;
	}
	
	for (i=1;i<=n;i++) printf("%d\n",a[i]);
return 0;
}
 
