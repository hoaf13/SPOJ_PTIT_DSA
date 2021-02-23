#include<bits/stdc++.h>
 
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
const long long MOD = 1e15+7;
 
struct Matrix{
    long long f[4][4];
};
 
 
long long mul_bignum(long long x, long long y) {
	if (x == 0 || y == 0) return 0;
	string X = "", Y = "", Z;
	
    while(x > 0){
        X = X + char(x%10 + '0');
        x /= 10;
    }
    while(y > 0){
        Y = Y + char(y%10 + '0');
        y /= 10;
    }
	Z.resize(X.size()+Y.size(),'0');
	for(int i = 0;i<X.size();i++) {
		int c = 0;
		for(int j = 0;j < Y.size();j++) {
			c += (Z[i+j]-'0') + (X[i]-'0')*(Y[j]-'0');
			Z[i+j] = char(c%10+'0');
			c /= 10;
		}
		if (c > 0) Z[i+Y.size()] += c;
	}
	long long ans = 0;
	for(int i = Z.size()-1;i>=0;i--) ans = (ans*10LL + Z[i]-'0') % MOD;
	return ans;
}
 
Matrix multi(Matrix a , Matrix b){
    Matrix ans;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            long long sumz = 0;
            for(int k=0;k<4;k++){
                sumz += mul_bignum(a.f[i][k] , b.f[k][j]);
                sumz %= MOD;
            }
            ans.f[i][j] = sumz;
        }
    }
    return ans;
}
 
Matrix powerMOD( Matrix a , long long b){
    if (b == 1) return a;
    Matrix tmp = powerMOD(multi(a,a),b/2);
    if (b%2 == 0) return tmp;
    else return multi(a,tmp);
}
 
 
void process(){
    long long n;
    cin >> n;
 
    if (n == 1){
        cout << 1 << endl;
        return;
    }
 
    if (n == 2){
        cout << 3 << endl;
        return;
    }
 
    unsigned long long t = 3;
    unsigned long long tribo1 = 3;
    unsigned long long tribo2 = 2;
    unsigned long long tribo3 = 1;
 
    Matrix a;
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            a.f[i][j] = 0;
        }
    }
    
    a.f[0][0] = a.f[0][1] = 1;
    a.f[1][1] = a.f[1][2] = a.f[1][3] = 1;
    a.f[2][1] = 1;
    a.f[3][2] = 1;
 
    Matrix ans = powerMOD(a,n-2);
 
    unsigned long long res = (ans.f[0][0] * t)%MOD + (ans.f[0][1] * tribo1)%MOD + (ans.f[0][2] * tribo2)%MOD + (ans.f[0][3]*tribo3)%MOD;
    res %= MOD;
 
    cout << res << endl;
 
}
 
int main(){
 
    faster();
    int T;
    cin >> T;
    while(T--){
 
        process();
 
    }
    return 0;
} 
