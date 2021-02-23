#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
ll sumz = 0;
ll subz = 0;
ll n,m;
ll a,b;
 
void init(){
    cin >> n >> m;
    subz = m;
    sumz = (n+1)*n/2;
    a = (sumz + subz)/2;
    b = sumz - a;
}
 
void process(){
    if (a*2 != sumz + subz){
        cout << "No\n";
        return;
    }
    ll tmp = __gcd(a,b);
    if (tmp == 1) cout << "Yes\n";
    else cout << "No\n";
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        init();
        process();
    }
    return 0;
} 
