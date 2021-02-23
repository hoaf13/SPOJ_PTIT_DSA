#include <stdio.h>
#define du 1000000007;
 
int main()
{
    int n;
    scanf("%d",&n);
    if (n==0 || n==1) printf("%d",n);
    else{
	
   		int i,f1=0,f2=1,f;
   		for (i=2; i<=n; i++){
    	    f=(f1+f2)%du;
    	    if (i==n) break;
        	f1=f2;
        	f2=f;
    	}
    printf("%d",f);
	}
    return 0;
} 
