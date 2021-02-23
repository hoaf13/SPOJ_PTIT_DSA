#include<bits/stdc++.h>
 
using namespace std;
 
vector<long long> a(14,0);
long long res = 0;
 
 
void init(){
    for(int i=0;i<14;i++) cin >> a[i];
}
 
void process(){
    for(int i=0;i<14;i++){
        vector<long long> b = a;
        long long val = a[i] / 14;
        long long du = a[i] % 14;
        b[i] = 0; // fixed 
        int indexz = i+1;
        for(int j=0;j<14;j++) b[j] += val;
        while(du--){
            if (indexz == 14) indexz = 0;
            b[indexz]++;
            indexz++;
        }
        long long sumz = 0;
        for(int j=0;j<14;j++){
            if (b[j] % 2 == 0) sumz += b[j];
        } 
        res = max(res, sumz);
    }
    cout << res; 
}
 
int main(){
 
    init();
    process();
 
    return 0;
} 
