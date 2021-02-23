#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
ll n ,m , k;
 
ll Mul(ll n, ll m, ll k){
    if (m == 0) return 0;
    if (m % 2 == 0) return Mul(n*2%k,m/2,k)%k;
    else return (Mul(n%k,m-1,k)%k + n%k ) %k; 
}
 
ll Pow(ll n , ll m , ll k){
    if (m == 0) return 1;
    ll ans = Pow(n,m/2,k);
    ans = Mul(ans,ans,k);
    if (m%2 != 0) ans = Mul(ans,n,k)%k;
    return ans;
}
 
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;
    cout << Pow(n,m,k);
 
    return 0;
} 
