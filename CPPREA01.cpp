#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void process(){
    ll n;
    cin >> n;
    vector<bool> a(ll(1e7+7), false);
    for(int i=0;i<n;i++){
        ll tmp;
        cin >> tmp;
        if (tmp >= 0 && tmp < ll(1e7+1) ) a[tmp] = true;       
    }
    for(int i=0;i<n;i++){
        if (a[i]){
            cout << i << " ";
        }else cout << -1 << " ";
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
    
 
    return 0;
} 
