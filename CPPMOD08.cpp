#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll solve(ll n, ll p){ 
    ll ans = 0; 
    for (ll x=1; x<p; x++){ 
        if ((x*x)%p == 1){
            ll tmp = x + p * (n/p); 
            if (tmp > n) 
                tmp -= p; 
            ans += ((tmp-x)/p + 1); 
        } 
    } 
    return ans; 
} 
 
void process(){
    ll b,p;
    cin >> b >> p;
    cout << solve(b,p) << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    
 
    return 0;
} 
