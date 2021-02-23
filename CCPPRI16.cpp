#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
const int limit = 1e6+6;
vector<bool> prime(limit,true);
vector<ll> res(limit,0);
 
void preprocess(){
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i<limit;i++){
        if(prime[i]){
            res[i] = 1;
            for(int j=i*2;j<limit;j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=1;i<limit;i++){
        res[i] += res[i-1];
    }
}
 
void process(){
    ll n;
    cin >> n;
    n = sqrt(n);
    cout << res[n] << endl;
}
 
int main(){
    preprocess();
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    
 
    return 0;
}  
