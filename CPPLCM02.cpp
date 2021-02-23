#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int limit = 1e5+5;
 
bool isPrime[limit];
long long res[limit] = {0};
 
 
void preprocess(){
    res[1] = 1;
    for(ll i=2;i<limit;i++){
        ll tmp = i*res[i-1];
        res[i] = tmp / __gcd(res[i-1] ,i);
    }
}
 
int main(){
    preprocess();
    int T;
    cin >> T;
    while (T--){
        ll n;
        cin >> n;
        cout << res[n] << endl;
    }
    
}
 
