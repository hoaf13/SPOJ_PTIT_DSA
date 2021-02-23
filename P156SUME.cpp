#include<bits/stdc++.h>
 
using namespace std;
 
string s1;
string s2;
 
void init(){
    cin >> s1 >> s2;
}
 
void process(){
    int res = 0;
    int n1 = s1.length();
    int n2 = s2.length();
    s1.insert(s1.begin() , 1 , '0');
    s2.insert(s2.begin() , 1 , '0');
 
    int n = min(n1, n2);
    string tmp1 = "";
    string tmp2 = "";
    for(int i=1;i<=n1;i++){
        tmp1 += s1[i];
        tmp2 += s2[i];
        if (n1 % i == 0 && n2 % i == 0){
            if (tmp1 != tmp2) continue;
            string x1 = "";
            string x2 = "";
            for(int j=1;j<=n1/i;j++){
                x1 += tmp1;
            } 
            x1.insert(x1.begin(),1,'0');
            if (x1 != s1) continue;
            for(int j=1;j<=n2/i;j++){
                x2 += tmp2;
            }
            x2.insert(x2.begin(),1,'0');
            if (x2 != s2) continue;
            res++;
        }
    }
    cout << res;
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    
    init();
    process();
 
    return 0;
} 
