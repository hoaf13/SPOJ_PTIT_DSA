#include<stdio.h>
void quicksort(int a[], int l, int r){
	int i=l;
	int j=r;
	int mid=(l+r)/2;
	int key=a[mid];
	while(i<=j){
		while(a[i]<key) i++;
		while(a[j]>key) j--;
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
	int T,k=0;
	scanf("%d",&T);
	while(k<T){
		k++;
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		int i;
		for (i=0;i<n;i++) scanf("%d",&a[i]);
		for (i=0;i<n;i++) scanf("%d",&b[i]);
		quicksort(a,0,n-1);
		quicksort(b,0,n-1);
//		for (i=0;i<n;i++) printf("%d ",a[i]);
//		printf("\n");
//		for (i=0;i<n;i++) printf("%d ",b[i]);
		int flag=1;
		for(i=0;i<n;i++){
			if (a[i]>b[i]){
				flag=0;
				break;
			}
		}
		if (flag==1) printf("YES\n");
		else printf("NO\n");
	}
	
return 0;
}
 
