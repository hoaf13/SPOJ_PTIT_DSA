#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    long long x;
    cin >> x;
    if (x <= 14){
        cout << "NO" << endl;
        return;
    }
    long long tmp = x/14;
    long long tmp2 = x - (tmp-1)*14;
    if (tmp2 == 15 || tmp2 == 16 || tmp2 == 17 || tmp2 == 18|| tmp2 == 19|| tmp2 == 20) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}   
