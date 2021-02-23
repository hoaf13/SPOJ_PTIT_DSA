#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 	ios_base::sync_with_stdio(0);
 	cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int dp1[s.length()] = {0};
    int dp2[s.length()] = {0};
    if (s[0] == '1') dp1[0]++;
    if (s[0] == '2') dp2[0]++;
    for(int i=1;i<s.length();i++){
        dp1[i] = dp1[i-1];
        dp2[i] = dp2[i-1];
        if (s[i] == '1') dp1[i]++;
        if (s[i] == '2') dp2[i]++;
    }
 
   
    long long res = 0;
    for(int i=0;i<s.length();i++){
        if (s[i] == '1'){
            res += (dp2[s.length()-1] - dp2[i]);
        }
    }
    cout << res;
    return 0;
}
  
