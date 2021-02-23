#include<stdio.h>
 
int main(){
	int n;
	scanf("%d",&n);	
	int i,j,val=0,ngay;
	for (i=1;i<=12;i++){
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) ngay=31;
		else if (i==2){
			if ((n%4==0 && n%100!=0) || (n%400==0))
                ngay=29;
            else ngay=28;
		}
		else ngay=30;
		for(j=1;j<=ngay;j++)
			val+= j/10 + j%10 + i/10 +i%10 + n/1000 + n%10 + (n/100)%10 + (n/10)%10;
	}
	printf("%d",val);
return 0;
}
 
