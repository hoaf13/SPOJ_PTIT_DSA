#include<bits/stdc++.h>
 
using namespace std;
 
const int MOD = 1e9+7;
 
 
struct Matrix{
    long long mtx[2][2];
};
 
Matrix multi(Matrix a , Matrix b){
    Matrix res;
    res.mtx[0][0] = a.mtx[0][0]*b.mtx[0][0] + a.mtx[0][1]*b.mtx[1][0];
    res.mtx[0][1] = a.mtx[0][0]*b.mtx[0][1] + a.mtx[0][1]*b.mtx[1][1];
    res.mtx[1][0] = a.mtx[1][0]*b.mtx[0][0] + a.mtx[1][1]*b.mtx[1][0];
    res.mtx[1][1] = a.mtx[1][0]*b.mtx[0][1] + a.mtx[1][1]*b.mtx[1][1];
    res.mtx[0][0] %= MOD;
    res.mtx[0][1] %= MOD;
    res.mtx[1][0] %= MOD;
    res.mtx[1][1] %= MOD;
    return res;
}
 
Matrix powerMOD(Matrix a , long long mu ){
    if (mu == 1) return a;
    if (mu%2 == 0) return powerMOD(multi(a,a),mu/2);
    else return  multi(a,powerMOD(multi(a,a),mu/2));
}
 
void process(){
    Matrix a;
    a.mtx[0][0] = 0;
    a.mtx[0][1] = 1;
    a.mtx[1][0] = 1;
    a.mtx[1][1] = 1;
 
    long long f1 = 1;
    long long f2 = 1;
 
    long long n;
 
    cin >> n;
    if (n == 1 || n == 2 ){
        cout << 1 << endl;
        return;
    }
    Matrix b = powerMOD(a, n-1);
    long long res = b.mtx[0][0]*f1 + b.mtx[0][1]*f2;
    res %= MOD;
    cout << res << endl;    
}
 
 
 
int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
    return 0;
}   
