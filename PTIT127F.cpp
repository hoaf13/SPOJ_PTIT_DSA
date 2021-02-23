#include<stdio.h>
 
int main (){
    long N,i;
   	scanf("%ld",&N);
   	long a[300008];
   	for (i=1; i<=N; i++)	scanf("%ld",&a[i]);
   	long minsort=0, book=N;
	for ( i=N; i>=1; i--){
    	if (a[i]==book)   --book;
    	else ++minsort;
   	}
   	printf("%ld",minsort);
   	return 0;
}  
