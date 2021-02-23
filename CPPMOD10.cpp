#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const ll MOD = 1e9 + 7;
 
ll POW(ll a, ll b){
    if (b == 0) return 1;
    if (b == 1) return a;
    if (b % 2 == 0) return POW(a*a%MOD,b/2)%MOD;
    else return a * POW(a*a%MOD,b/2)%MOD;
}
 
void process(){
    ll  n,x;
    ll res = 0;
    cin >> n >> x;
    if (n == 0){
        cout << 0 << endl;
        return ;
    }
    vector<ll> a(n);
    for(int i=n-1;i>=0;i--) cin >> a[i];
    for(int i=n-1;i>=0;i--){
        res += a[i] * POW(x,i) % MOD;
        res %= MOD;
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
