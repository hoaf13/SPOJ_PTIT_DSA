#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll MOD(string a , ll m){
    ll ans = 0;
    for(int i=0;i<a.length();i++){
        ans = ans * 10 + (a[i] - '0');
        ans %= m;    
    }
    return ans;
}
 
void process(){
    string n;
    ll m;
    cin >> n >> m;
    cout << MOD(n,m) << endl;
 
}
 
int main(){
 
    int T;
    cin >> T;
    while(T--){
        process();
    }
 
    return 0;
} 
