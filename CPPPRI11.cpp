#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void process(){
    ll n;
    cin >> n;
    if (n > ll(1e12)){
        cout << 0 << endl;
        return ;
    }
    ll sumz = 1;
    for(int i=2;i<sqrt(n);i++){
        if (n % i == 0){
            sumz += i;
            sumz += n/i;
        }
    }
    int k = sqrt(n);
    if(k*k == n) sumz += k;
    if (sumz == n) cout << 1 << endl;
    else cout << 0 << endl;
}
 
int main(){
 
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    return 0;
} 
