#include<bits/stdc++.h>
 
using namespace std;
 
int n,k;
string s;
vector<bool> palin;
int cntMissIndex = 0;
 
void init(){
    cin >> n >> k;
    cin >> s;
    palin.resize((int)n/2,false);
}
 
void process(){
    for(int i=0;i<n/2;i++){
        if (s[i] != s[n-1-i]){
            cntMissIndex++;
            palin[i] = true;
        }
    }
    if (k < cntMissIndex){
        cout << -1;
        return;
    }
    for(int i=0;i<n/2;i++){
        if (s[i] != s[n-1-i]){
            char tmp = max(s[i],s[n-1-i]);
            s[i] = tmp;
            s[n-1-i] = tmp;
            k--;
        }
    }
    if (k > 0){
        for(int i=0;i<n/2;i++){
            if (k <= 0) break; 
            if (s[i] != '9'){
                if (palin[i] == false){
                    if (k > 1){
                        s[i] = '9';
                        s[n-1-i] = '9';
                        k-=2;
                    }
                }
                else{
                    s[i] = '9';
                    s[n-1-i] = '9';
                    k--;
                }
            }
        }    
    }
    if (k > 0 && n % 2 == 1){
        s[(int)n/2] = '9';
    }
    cout << s; 
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    init();
    process();
 
    return 0;
} 
