#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
vector<ll> fibo(93);
 
void preprocess(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<=92;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }    
}
 
void process(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<93;j++){
            if (a[i] == fibo[j]){
                cout << a[i] << " ";
                break;
            }
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
