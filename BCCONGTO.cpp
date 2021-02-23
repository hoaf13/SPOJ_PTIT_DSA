#include<iostream>
#include<string>
using namespace std;
 
int main (){
    while (1){
        string str;
        cin>>str;
        if (str=="0") return 0;
        long long s=0;
        for (int i=0;i<str.length();i++){
            int so=str[i]-'0';
            if (so>4) so--;
            s=s*9+so;
        }
        cout<<str<<": "<<s<<endl;
    }
    return 0;
} 
