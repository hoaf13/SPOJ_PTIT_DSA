#include<stdio.h>
#include<string.h>
 
int main (){
    char s[50];
    gets(s);
    int stepMax=0;
    int L=0, R=0;
    int Lm=0, Rm=0;
    int i;
    for (i=0; i<strlen(s); i++){
        if (s[i]=='L'){
            L++;
            Lm++;
            if (Lm-R>stepMax) stepMax=Lm-R; 
        }
        else if (s[i]=='R'){
            R++;
            Rm++;
            if (Rm-L>stepMax) stepMax=Rm-L;
        }
        else{
            Lm++;
            if (Lm-R>stepMax) stepMax=Lm-R; 
            Rm++;
            if (Rm-L>stepMax) stepMax=Rm-L;
        }
    }
    printf("%d",stepMax);
    return 0;
} 
