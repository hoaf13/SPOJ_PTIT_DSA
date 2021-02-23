#include<stdio.h>
#include<string.h>
int main(){
	char str[80];
	char s1[]="#";
	int i;
	while(1){
		int dy=0,dn=0,dp=0,da=0;
		gets(str);
		int	x=strcmp(str,s1);
		if (x==0) break;
		for(i=0; i<=strlen(str) ;i++){
			if(str[i]=='A') da++;
			if(str[i]=='Y') dy++;
			if(str[i]=='N') dn++;
//			if(str[i]=='P') dp++;
		}
		if ((float)da>=(float)strlen(str)/2.0) printf("need quorum");else
		if (dy>dn) printf("yes");else
		if (dy<dn) printf("no");else
		if (dy==dn) printf("tie");
		printf("\n");
		
	}
return 0;
}
 
