#include<stdio.h>
#include<string.h>
int main(){
	int n,k=0;
	scanf("%d",&n);
	int i,j;
	while(k<=n){
		k++;
		char s[10000];
		gets(s);
		int d=1;
		for(i=0;i<strlen(s);i++){
			if (s[i]==s[i+1]){
				d++;
			}
			if (s[i]!=s[i+1]){
				printf("%d%c",d,s[i]);
				d=1;
			}
		}
		printf("\n");
	}
return 0;
}
 
