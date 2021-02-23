#include<bits/stdc++.h>
 
using namespace std;
 
long long MOD = 123456789; 
long long n;
 
void init(){
    cin >> n;
 
}
 
long long POW(long long a, long long b){
    if (b == 0) return 1;
    if (b == 1) return a;
    if (b % 2 == 0) return POW(a*a%MOD,b/2);
    return a*POW(a*a%MOD,b/2)%MOD; 
}
 
void process(){
    long long res = POW(2,n-1);
    cout << res;
}
 
int main(){
 
    init();
    process();
 
 
    return 0;
} 
