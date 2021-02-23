#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll POW(ll x, ll y ,ll p){
    if (y == 0) return 1;
    if (y == 1) return x;
    if (y % 2 == 0) return POW(x*x%p,y/2,p)%p;
    else return x * POW(x*x%p,y/2,p)%p;
}
 
void process(){
    ll x,y,p;
    cin >> x >> y >> p;
    ll ans = POW(x,y,p);
    cout << ans << endl;
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
 
    return 0;
} 
