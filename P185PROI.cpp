#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ll n;
 
string toBin(ll n){
    string ans = "";
    while(n > 0){
        ans = char(n % 2 + '0') + ans;
        n /= 2;
    }
    return ans;
}
 
void init(){
    cin >> n;
    
}
 
void process(){
    string m = toBin(n);
    ll res = 0;
    for(int i=0;i<m.length();i++){
        if (m[i] == '0'){
            res += pow(2, m.length() - i - 1);
        }
    }
    cout << res << endl;
}
 
int main(){  
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        init();
        process();
    }
    return 0;
}; 
