#include<bits/stdc++.h>
 
using namespace std;
 
int n;
vector<string> a;
string res = "";
 
void init(){
    cin >> n;
    a.resize(n);
    for (auto &z: a){
        cin >> z;
    }
}
 
bool check(string s){
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i].length();j++){
            string tmp = "";
            for(int k=j;k<a[i].length();k++){
                tmp += a[i][k];
                if (tmp.length() == s.length() && tmp == s){
                    return false;
                }
                if (tmp.length() > s.length()) break;
            }
        }
    }
    if (res == "") res = s;
    return true;
}
 
void Try(string s , int cnt , bool &flag){
    if (check(s) && s != ""){
        flag = false;
        return;
    }
    if (s.length() == cnt) return;
    for(int i=0;i<26;i++){
        Try(s + char('a'+i), cnt, flag);
    }
}
 
void process(){
    int cnt = 1;
    bool flag = true;
    while(flag){
        Try("", cnt , flag);
        if (flag == false){
            cout << res;
            return;
        }
        cnt++;
    }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    init();
    process();
 
    return 0;
} 
