#include<stdio.h>
 
int sodau(int a){
	if (a==0 || a==4 || a==7) return 1;
	if (a==1 || a==8) return 2;
	if (a==5) return 3;
	if (a==2) return 4;
	if (a==9) return 5;
	if (a==6) return 6;
	if (a==3) return 8;
			
}
 
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int kt=0,i,sd;
    for (i=a+1; i<=62; i++){
        if (i==46 || i==56) sd=7;
        else if (i==53) sd==9;
        else{
            int socuoi=i%10;
            sd=sodau(socuoi);
        }
        if (sd==b)
        {
            kt=1;
            printf("%d",i);
            return 0;
        }
    }
    printf("0");
    return 0;
} 
