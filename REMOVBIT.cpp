#include<bits/stdc++.h>
 
using namespace std;
 
string s;
 
void init(){
    cin >> s;
 
}
 
void process(){
    int indez = -1;
    for(int i=s.length() - 1 ;i >= 0 ;i -- ){
        if (s[i] == '0'){
            indez = i;
        }
    }
    if (indez != -1){
        s.erase(s.begin() + indez , s.begin() + indez + 1);
    }else{
        s.erase(s.begin() , s.begin() + 1);
    }
    cout << s ; 
}
 
int main(){
 
    init();
    process();
 
    return 0;
} 
