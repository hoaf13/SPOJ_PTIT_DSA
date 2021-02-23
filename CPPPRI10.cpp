#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ll sumOfN(ll n){
    ll ans = 0;
    while(n){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
 
void process(){
    ll n;
    int cnt = 0;
    cin >> n;
    ll sumzN = sumOfN(n);
    ll sumzPrime = 0;
    for(int i=2;i<=sqrt(n);i++){
        if (n % i == 0){
            while(n % i == 0){
                cnt++;
                sumzPrime += sumOfN(i);
                n /= i;
            }
        }
    }
 
    if (n != 1){
        cnt++;
        sumzPrime += sumOfN(n);
    }
    if (sumzN == sumzPrime && cnt != 1) cout << "YES\n";
    else cout << "NO\n";
    
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
 
    return 0;
} 
