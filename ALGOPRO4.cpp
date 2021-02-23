#include<stdio.h>
#include<string.h>
int kiemtra(char s[],int i){
	if (s[i]=='0' && s[i+1]=='0' && s[i+2]=='0') return 0;
	if (s[i]=='0' && s[i+1]=='0' && s[i+2]=='1') return 1;
	if (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') return 2;
	if (s[i]=='0' && s[i+1]=='1' && s[i+2]=='1') return 3;
	if (s[i]=='1' && s[i+1]=='0' && s[i+2]=='0') return 4;
	if (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1') return 5;
	if (s[i]=='1' && s[i+1]=='1' && s[i+2]=='0') return 6;
	if (s[i]=='1' && s[i+1]=='1' && s[i+2]=='1') return 7;
}
 
int main(){
	char s[70];
	char xau[70];
	gets(s);
 
	if (strlen(s)%3==0){
		int m=0;
		while(m<strlen(s)){
			printf("%d",kiemtra(s,m));
			m=m+3;	
		}
	}
	if ((strlen(s)+1)%3==0){
		int i=0,j=1;
		xau[0]='0';
		for (i=0;i<strlen(s);i++){
			xau[j++]=s[i];
		}
		int m=0;
		while(m<j){
			printf("%d",kiemtra(xau,m));
			m=m+3;	
		}
	}
	if ((strlen(s)+2)%3==0){
		int i=0,j=2;
		xau[0]='0';
		xau[1]='0';
		for (i=0;i<strlen(s);i++){
			xau[j++]=s[i];
		}
		int m=0;
		while(m<j){
			printf("%d",kiemtra(xau,m));
			m=m+3;	
		}
	}
return 0;
}
 
