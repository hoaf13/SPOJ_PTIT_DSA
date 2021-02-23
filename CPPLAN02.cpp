#include<bits/stdc++.h>
 
using namespace std;
 
string add(string a, string b){
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--){
        int tmp=a[i]-48 + b[i]-48 + carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+48)+res;
    }
    if(carry>0) res="1"+res;
    return res;
}
 
string sub(string a, string b){
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    bool neg=false;
    if(a<b){
        swap(a,b);
        neg=true;
    }
    int borrow=0;
    for(int i=a.length()-1; i>=0;i--){
        int tmp=a[i]-b[i]-borrow;
        if(tmp<0){
            tmp+=10;
            borrow=1;
        }
        else borrow=0;
        res=(char)(tmp%10 + 48) + res;
    }
    //while(res.length()>1 && res[0]=='0') res.erase(0,1);
    if(neg) res="-"+res;
    return res;
}
 
void process(){
    string a,b;
    cin >> a >> b;
    string res = "";
    if (a[0] == '-' && b[0] == '-'){
        res += "-";
        res += add(a,b);
    }
    else if (a[0] != '-' && b[0] != '-'){
        res = add(a,b);
    }
    else if (a[0] == '-' && b[0] != '-'){
        res = sub(b,a);
    }
    else{
        res = sub(a,b);
    }
    cout << res << endl;
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
 
    return 0;
} 
