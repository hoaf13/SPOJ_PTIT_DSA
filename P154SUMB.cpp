#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair< ll , ll > II;
const int limit = 1e5+5;
 
II a[limit];
ll b[limit];
ll f[limit] = {0};
int n;
 
 
void init(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a+1,a+n+1);
    int cnt = 0;
    long long lastz = 1e9+9;
    for(int i=1;i<=n;i++){
        if (a[i].first != lastz){
            cnt++;
            lastz = a[i].first;
        }
        b[a[i].second] = cnt;
    }
}
 
ll getz(int x){
    ll ans = 0;
    for(;x <= limit;x += x & -x) ans += f[x];
    return ans;
}
 
void setz(int x){
    for(;x > 0 ; x -= x & -x) f[x]++;
}
 
void process(){
    ll res = 0;
    for(int i=1;i<=n;i++){
        res += getz(b[i] + 1);
        setz(b[i]);
    }
    cout << res;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    init();
    process();
 
    return 0; 
}
     
