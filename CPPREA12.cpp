#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void process(){
    int n;
    ll maz = -1e18;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        ll tmp = 1;
        for(int j=i;j<n;j++){
            tmp *= a[j];
            maz = max(maz, tmp);
        }
    }
    cout << maz << endl;
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
 
    return 0;
} 
