#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    long long a,b;
    cin >> a >> b;
    stringstream ss;
    ss << b;
    string s;
    ss >> s;
    int n = s.length()-1;
    long long res = a*n;
    cout << res << endl;
}
 
int main(){
 
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}   
