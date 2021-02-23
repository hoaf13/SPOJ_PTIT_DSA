#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
 
void process(){
    ll n;
    cin >> n;
    for(int i=2;i<=sqrt(n);i++){
        if (n%i == 0){
            while(n % i == 0){
                n/=i; 
                cout << i << " "; 
            }
        }
    }
    if (n !=  1) cout << n;
    cout << endl;
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
 
    return 0;
}  
