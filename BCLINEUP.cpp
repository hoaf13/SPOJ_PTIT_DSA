#include<stdio.h>
void quicksort(long a[],int l, int r){
	int i=l,j=r;
	int mid=(l+r)/2;
	int key = a[mid];
	while (i<=j){
		while (a[i]<key) i++;
		while (key<a[j]) j--;
		if (i<=j){
			int tg=a[i];
			a[i]=a[j];
			a[j]=tg;
			i++;
			j--;
		}
	}
	if (l<j) quicksort(a,l,j);
	if (i<r) quicksort(a,i,r);
}
 
int main(){
	long n,q;
	scanf("%ld%ld",&n,&q);
	long a[100005];
	int i,j;
	for (i=1;i<=n;i++) scanf("%ld",&a[i]);
	
	int k=0;
	while(k<q){
		k++;
		long x,y;
		scanf("%ld%ld",&x,&y);	
		quicksort(a,x,y);
		printf("%ld\n",a[y]-a[x]);
	}
return 0;
}
 
