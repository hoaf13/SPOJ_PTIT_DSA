#include<bits/stdc++.h> 
using namespace std; 
 
typedef long long ll; 
    
ll reduceB(ll a, string b) { 
    ll mod = 0; 
    for (int i=0; i<b.length(); i++) 
        mod = (mod*10 + b[i] - '0')%a; 
  
    return mod; 
}
   
ll gcdLarge(ll a, string b) { 
    ll num = reduceB(a, b); 
   return __gcd(a, num); 
} 
  
 
int main() {   
    int T;
    cin >> T;
    while(T--){ 
        ll a;
        string b;
        cin >> a >> b;  
        cout << gcdLarge(a, b) << endl; 
    }  
    return 0; 
}  
