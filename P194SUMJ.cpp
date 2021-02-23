#include<bits/stdc++.h>
 
using namespace std;
 
const long long MOD = 1e9+9;
long long n,m,k;
long long res = 0;
vector<long long> v;
 
void init(){
    cin >> n >> m >> k;
}
 
void process(){
    long long cnt_wrong = n-m;
    while( cnt_wrong -- ){
        if (m == 0 ) break;  
        long long tmp;
        if (m < k-1) tmp = m;
        else tmp = k-1;
        m -= tmp;
        v.push_back(tmp);        
    }
    if(m > 0){
        long long o = m/k;
        long long du= m%k;
        while(o--){
            res += k;
            res %= MOD;
            res *= 2;
            res %= MOD;
        }   
        res += du;
        res %= MOD;
    }
    for(int i=0;i<v.size();i++){
        res += v[i];
        res %= MOD;
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
