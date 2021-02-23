#include <stdio.h>
int main (){
    long a,b,v;
    scanf("%ld%ld%ld",&a,&b,&v);
    if (a==v) printf("1");
    else{
        if ((v-b)%(a-b)==0) printf("%d",(v-b)/(a-b));
        else printf("%d",(v-b)/(a-b)+1);
    }
    return 0;
}
 
