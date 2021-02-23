#include <stdio.h>
 
int main (){
    int n;
    scanf("%d",&n);
    int a[5003] = {0};
    int x,i;
    for (i=0; i<n; i++){
        scanf("%d",&x);
        a[x] = 1;
    }
    int count = 0;
    for ( i=1; i<=n; i++)
        if (a[i]==0)
            count++;
    printf("%d",count);
    return 0;
} 
