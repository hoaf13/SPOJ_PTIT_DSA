#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    string s;
    cin >> s;
    if (s.length() < 3){
        cout << 0 << endl; 
        return;
    }
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i=0;i<s.length();i++){
        if (s[i] == '1') cnt1++;
        else cnt0++;
    }
 
    int res = min(cnt0,cnt1);
    s = " " + s;
    int dp0[s.length()] = {0};
    int dp1[s.length()] = {0};
    dp0[0] = 0;
    dp1[0] = 0;
    for (int i=1;i<s.length();i++){
        dp0[i] = dp0[i-1];
        dp1[i] = dp1[i-1];
        if (s[i] == '0'){
            cnt0--;
            dp1[i]++;
        }else{
            cnt1--;
            dp0[i]++;
        }
        res = min(res, dp0[i] + cnt0);
        res = min(res, dp1[i] + cnt1);
    }
    cout << res << endl;
    
}
 
int main(){
 
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}  
