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
   ll l,r;
   cin >> l >> r;
   int a = sqrt(l);
   int b = sqrt(r);
   cout << res[b] - res[a] << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
    preprocess();
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    
 
 
    return 0;
} 
