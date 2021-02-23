#include<stdio.h>
#include<string.h>
int main(){
		
		while(1){
			char s[40];
			long n;
			scanf("%s",s);
			if(strcmp(s,"[END]")==0) return 0;
			scanf("%ld",&n);
		if(n%5==2||n%5==0) printf("Hanako\n");
		else printf("Taro\n");
		}
} 
