#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
 
void process(){
    ll n;
    cin >> n;
    ll res = 0;
    for(ll i=2;i<=sqrt(n);i++){
        if (n%i == 0){
            res = max(res,i);
            while(n % i == 0){
                n/=i;  
            }
        }
    }
    if (n !=  1) res = max(res,n);
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
