#include<stdio.h>
#include<string.h>
int main()
{
	char s[50000];
	gets(s);
	int i,dem=0,tong=0;
	for (i=strlen(s);i>=0;i--) if(s[i]==')' && s[i-1]==')') dem++;
	while(dem!=0)
	{
		for (i=0;i<strlen(s)-1;i++) 
		 {
		 	if(s[i]=='('&& s[i+1]=='(') tong+=dem;
		 	else if(s[i]==')' && s[i+1]==')') dem--;
		 }
	}
	printf("%d",tong);
	return 0;
} 
