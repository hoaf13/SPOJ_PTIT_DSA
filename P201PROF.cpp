#include<bits/stdc++.h>
 
using namespace std;
 
long long POW(long long a, long long b){
    long long ans = 1;
    for(int i=1;i<=b;i++) ans *= a;
    return ans;
}
 
long long LCM(long long a, long long b){
    long long gcd = __gcd(a,b);
    long long lcm = a*b/gcd;
    return lcm;
}
 
int main(){
    long long res = LONG_LONG_MAX;
    long long n, k;
    cin >> n >> k;
    for (int i=0;i<=8;i++){
        res = min (res, LCM(n, POW(10, k)));
    }
    cout << res;
    return 0;
}  
