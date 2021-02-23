#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    int a,m;
    cin >> a >> m;
    int ans = -1;
    for(int i=0;i<m;i++){
        if (a * i % m == 1){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        process();
    }
 
    return 0;
} 
