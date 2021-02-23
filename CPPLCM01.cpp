#include<bits/stdc++.h>
 
using namespace std;
 
long long GCD(long long a , long long b){
    while(a*b!=0){
        if (a > b)  a%=b;
        else b %= a;
    }
    return a+b;
}
 
long long LCM(long long a, long long b , long long c){
    return a*b/c;
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        long long a,b;
        cin >> a >> b;
        long long ans1 = GCD(a,b);
        long long ans2 = LCM(a,b,ans1);
        cout << ans2 << " " << ans1 << endl;
    }
    return 0;
}
 
