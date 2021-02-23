#include<bits/stdc++.h>
 
using namespace std;
 
const int limit = 1e4 + 4; 
vector<bool> prime(limit);
 
void preprocess(){
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i<limit;i++) prime[i] = true;
    for(int i=2;i<sqrt(limit);i++){
        if(prime[i]){
            for(int j=i*2;j<limit;j+=i){
                prime[j] = false;
            }
        }
    }
}
 
void process(){
    int n;
    cin >> n;
    for(int i=2;i<=n;i++){
        if (prime[i]) cout << i << " ";
    }
    cout << endl;
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
