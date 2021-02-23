#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void process(){
    ll s = 0;
    ll n,k;
    cin >> n >> k;
    for(ll i=1;i<=n;i++) s += i % k;
    cout << s << endl;
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
