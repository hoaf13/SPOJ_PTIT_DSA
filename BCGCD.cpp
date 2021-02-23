#include<stdio.h>
 
int main(){
    
    long long a,b;
    while (1)
    {
        scanf("%lld %lld" , &a , &b);
        if (a == 0 && b == 0) return 0;
        long long tmp1 = (long long)a*b;
    
        while (a * b != 0){
            if (a > b) a %= b;
            else b %= a;
        }
    
        long long ucln = a+b;
        long long bcnn = tmp1 / ucln;
        printf("%lld %lld\n" , ucln , bcnn);
    }
   
    return 0;
} 
