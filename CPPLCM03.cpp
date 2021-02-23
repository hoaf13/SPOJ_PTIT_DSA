#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
const ll MOD = 1e9+7;
 
ll POW(ll a, ll b){
    if (b == 1) return a;
    if (b % 2 == 0) return POW(a*a%MOD,b/2)%MOD;
    else return a*POW(a*a%MOD,b/2)%MOD;
}
 
void process(){
    int n;
    vector<ll> a;
    ll h = 1;
    cin >> n;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        h *= a[i];
        h %= MOD;
    }
    ll g = a[0];
    for(int i=1;i<n;i++){
        g = __gcd(a[i], g);
    }
    ll res = POW(h,g);
    cout << res << endl;
}
 
int main(){
 
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    
 
    return 0;
} 
