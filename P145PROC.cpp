#include<bits/stdc++.h>
 
using namespace std;
 
int n;
bool visited[42] = {false};
int res = 0;
 
int main(){
 
    int T = 10;
    while(T--){
        cin >> n;
        if (visited[n%42] == false) res++;
        visited[n%42] = true;
    }
    cout << res;
    return 0;
} 
