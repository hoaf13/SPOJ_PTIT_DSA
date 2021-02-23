#include<bits/stdc++.h>
 
using namespace std;
 
bool flag = true;
 
void process(){
    long long a,b;
    cin >> a >> b;
    if ((a == 3 || a == 1) && a < b){
        cout << "NO\n";
    }
    else cout << "YES\n";
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}   
