#include<bits/stdc++.h>
 
using namespace std;
 
int n;
 
void init(){
    cin >> n;
}
 
void process(){
    if (n%2 == 0) cout << "Haley";
    else cout << "Leviz";
    cout << endl;
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        init();
        process();
    }
    return 0;
}  
