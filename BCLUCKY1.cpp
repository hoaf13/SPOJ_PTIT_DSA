#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
	gets(str);
	int i,d=0;
	for (i=0;i<strlen(str);i++){
		if (str[i]=='4' || str[i]=='7') d++;
	}
	if (d==7 || d==4 ) printf("YES");
	else printf("NO");
return 0;
}
 
