#include<bits/stdc++.h>
 
using namespace std;
 
const int limit = 1e6+6;
vector<bool> a(limit , false);
 
bool isPrime(int n){
    if (n < 2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if (n % i == 0) return false;
    }
    return true;
}
 
void preprocess(){
    for(int i=2;i<limit;i++){
        int k = sqrt(i);
        if (k*k == i && isPrime(k)){
            a[i] = true;
        }
    }
}
 
void process(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        if (a[i]){
            cout << i << " ";
        }
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
