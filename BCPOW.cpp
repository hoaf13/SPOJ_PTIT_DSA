#include <iostream>
#include <math.h>
using namespace std;
 
string Cong(string a, string b){
    int len = max(a.length(), b.length());
    while (a.length()<len)
        a="0"+a;
    while (b.length()<len)
        b="0"+b;
    
    string rs = "";
    int remember = 0;
    for (int i=len-1; i>=0; i--){
        int n1 = a[i]-'0';
        int n2 = b[i]-'0';
        int s = n1+n2+remember;
        char rs_tmp = s%10 + '0';
        rs = rs_tmp + rs;
        remember = s/10;
    }
    if (remember!=0)
        return char(remember+'0')+rs;
    return rs;
}
 
string luythua(string x, int n, int d){
    if (n==0) return "1";
    else if (n==1) return x;
    string rs = x;
    for (int i=2; i<=n; i++){
        string rs_tmp = rs;
        for (int j=2; j<=d; j++){
            rs = Cong(rs, rs_tmp);  //2^3 = ((2)*2)*2 = ((2)+(2))+((2)+(2))
        }
    }
    return rs;
}
 
int main(){
    int n, m;
    cin>>n>>m;
    string lt2 = luythua("2", n, 2);
    string lt3 = luythua("3", m, 3);
 
    string S = Cong(lt2, lt3);
    
    cout<<S[0];
    return 0;
} 
