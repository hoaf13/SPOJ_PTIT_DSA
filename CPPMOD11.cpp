#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll MUL(ll a,ll b, ll c){
    if (b == 0) 
        return 0;
    ll t = MUL(a, b / 2, c);     	
    t = (t + t) % c; 
    if (b % 2 == 1) t = (t + a) % c;
    return t;
} 
 
void process(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll ans = MUL(a,b,c);
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
