#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    int a,b,c;
    cin >> a >> b >> c;
    int x = max(0, (b+c-a+2)/2);
    cout << max(0, c-x+1) << endl; 
}
 
int main(){
 
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}  
