#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
const ll MOD = 1e9+7;
 
ll nCr[1003][1003] = {0};
 
void preprocess(){
    int k;
    for(int i=0;i<1003;i++){
        nCr[i][0] = nCr[i][i] = 1;
        k = i >> 1;
        for(int j=1;j<=k;j++){
            nCr[i][j] = nCr[i][i-j] = (nCr[i - 1][j] + nCr[i - 1][j - 1]) % MOD;
        }
    }
}
 
void process(){
    int n,r;
    cin >> n >> r;
    cout << nCr[n][r] << endl;
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
