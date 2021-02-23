#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    string s;
    cin >> s;
    stack<int> stk;
    int res = 0;
    stk.push(-1);
    for(int i=0;i<s.length();i++){
        if (s[i] == '(') stk.push(i);
        else{
            stk.pop();
            if (stk.size()){
                res = max(res, i - stk.top());
            }
            else stk.push(i);
        }
    }
    cout << res << endl;
}
 
int main(){
 	ios_base::sync_with_stdio(0);
 	cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) process();
    
 
    return 0;
}  
