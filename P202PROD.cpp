#include<bits/stdc++.h>
 
using namespace std;
 
long long n;
long long tertra[51] = {0};
    
void precompute(){
    tertra[0] = 0;
    tertra[1] = 1;
    tertra[2] = 2;
    tertra[3] = 4;
    tertra[4] = 8;
    for(int i=5;i<=50;i++){
        tertra[i] = tertra[i-1] + tertra[i-2] + tertra[i-3] + tertra[i-4];
    }
}
 
void process(){
    cin >> n;
    cout << tertra[n] << endl;
}
 
int main(){
    precompute();
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}  
