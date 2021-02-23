#include<stdio.h>
#include<string.h>
int main(){
	char s2[100],s1[50];
	gets(s1);
	int i;
	int d=0,k=0;
	for (i=strlen(s1)-1;i>=0;i--){
		d++;
		s2[k++]=s1[i];
		if (d==3){
			d=0;
			s2[k++]=',';
		}
	}
	for (i=k-1;i>=0;i--){
		if (i==k-1 && s2[i]==',') continue ;
		printf("%c",s2[i]);
	}
return 0;
}
 
