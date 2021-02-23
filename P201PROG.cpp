#include<bits/stdc++.h>
 
using namespace std;
 
vector<long long> fibo(92,0);
 
void precompute(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<=90;i++) fibo[i] = fibo[i-1] + fibo[i-2];
}
 
int main(){
    precompute();
    int n;
    cin >> n;
    cout << fibo[n];
 
    return 0;
}  
