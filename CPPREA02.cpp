#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void process(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll cnt = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if (a[i] != 0) cout << a[i] << " ";
        else cnt++;
    }
    while (cnt--)
    {
        cout << 0 << " ";
    }
    cout << endl;
}
 
int main(){
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    
} 
