#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    int n;
    cin >> n;
    vector<int> a(n);
    int miz = 999999999;
    for(int i=0;i<n;i++){
        cin >> a[i];
        miz = min(miz , a[i]);
    }
    for(int i=0;i<n;i++){
        a[i] -= miz;
    }
    int ucln = a[0];
    for(int i=1;i<n;i++){
        ucln = __gcd(ucln , a[i]);
    }
    int res = 0;
    for(int i=1;i<=sqrt(ucln);i++){
        if (ucln % i == 0){
            if (i != ucln/i) res+=2;
            else res++;
        }
    }
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
