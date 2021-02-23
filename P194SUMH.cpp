#include<bits/stdc++.h>
 
using namespace std;
 
int n;
 
void init(){
    cin >> n;
 
}
 
int calz(int i){
    stringstream ss;
    string s;
    ss << i;
    ss >> s;
    int ans = 1;
    for(int i=0;i<s.length();i++){
        ans *= (s[i] - '0');
    }
    return ans;
}
 
void process(){
    if (n==0){
    	cout << 10;
    	return;
    }
    for(int i=0;i<100000;i++){
        if (calz(i) == n){
            cout << i;
            return;
        }
    }
    cout << -1;
}
 
int main(){
   
    init();
    process();
 
    return 0;
}  
