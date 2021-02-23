#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    int n , k;
    cin >> n >> k;
    vector<int> res;
    res.push_back(0);    
    for(int i=2;i<=sqrt(n);i++){
        if (n % i == 0){
            while (n % i == 0){
                res.push_back(i);
                n /= i;
            }
        }
    }
    if (n != 1){
        res.push_back(n);
    }
    if (k > res.size() - 1) cout << -1 << endl;
    else cout << res[k] << endl;
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
