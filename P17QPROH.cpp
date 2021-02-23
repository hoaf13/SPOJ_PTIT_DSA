#include<stdio.h>
void quicksortdown(long a[],int l,int r){
	int i=l;
	int j=r;
	int mid=(l+r)/2;
	int key=a[mid];
	while(i<=j){
		while(a[i]>key) i++;
		while(a[j]<key) j--;
		if (i<=j){
			int tg=a[i];
			a[i]=a[j];
			a[j]=tg;
			i++;
			j--;
		}
	}
	if (l<j) quicksortdown(a,l,j);
	if (i<r) quicksortdown(a,i,r);
}
void quicksortup(long a[],int l,int r){
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
	if (l<j) quicksortup(a,l,j);
	if (i<r) quicksortup(a,i,r);
}
int main(){
	int T,k=0;
	scanf("%d",&T);
	while(k<T){
		k++;
		int n;
		scanf("%d",&n);
		long a[n],b[n];
		int i;
		for (i=0;i<n;i++)
			scanf("%ld",&a[i]);
		for (i=0;i<n;i++)
			scanf("%ld",&b[i]);
		quicksortup(a,0,n-1);
		quicksortdown(b,0,n-1);
		long tich=0;
		for (i=0;i<n;i++){
			tich+=a[i]*b[i];
		}
		printf("Case #%d: %ld\n",k,tich);
	}
 
return 0;
}
 
