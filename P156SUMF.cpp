#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
 
ll solve(ll x, ll y, ll m){
    ll a = max (x,y);
    ll b = min (x,y);
    ll ans = 0;
    if (a >= m) return 0;
    if (a <= 0) return -1;
    if (b < 0){
        ll k = -b/a;
        ans += k;
        b+=k*a;
    }
    while (b < m && a < m){
        x = max(a+b,a);
        y = min(a+b,a);
        a = x;
        b = y;
        ans++;
    }
    return ans; 
}
 
int main(){
    ll x, y, m;
    cin >> x >> y >> m;
    cout << solve(x,y,m)<<endl;
    return 0;
} 
