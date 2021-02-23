#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void process(){
    ll n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    for(int i=2;i<=sqrt(n);i++){
        if (n % i == 0){
            cnt2++;
            while(n % i == 0){
                cnt1++;
                n /= i;
            }
        }
    }
    if (n != 1){
        cnt1++;
        cnt2++;
    }
    if (cnt1 == 3 && cnt2 == 3) cout << 1 << endl;
    else cout << 0 << endl;
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
