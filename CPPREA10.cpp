#include <bits/stdc++.h> 
using namespace std; 
 
void process(){
    string inputString;
    string s = ""; 
    stack<int> stk;
    cin >> inputString;
    for(int i=0;i<=inputString.length();i++){
        stk.push(i+1);
        if (i == inputString.length() || inputString[i] == 'I'){
            while(!stk.empty()){
                s += to_string(stk.top());
                stk.pop();
            }
        }
    }
    cout << s << endl;
} 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while (T--){
        process();
    }
    return 0; 
}  
