#include<bits/stdc++.h>
 
using namespace std;
 
int n;
int a[16][16];
int visited[16] = {0};
int res = INT_MAX;
 
void init(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
 
bool checkz(){
    for(int i=1;i<=n;i++){
        if (visited[i] == 0){
            return false;
        }
    }
    return true;
}
 
void Try(int u,int cnt){
    if (cnt < res){
        if (checkz()){
            res = min(res,cnt + a[1][u]);
        }
        else{
            for(int i=1;i<=n;i++){
                if (visited[i] == 0 && u != i ){
                    visited[i] = 1;
                    Try(i,cnt+a[u][i]);
                    visited[i] = false;
                }     
            }
        }
    }
}
 
 
void process(){
    visited[1] = true;
    Try(1,0);
    cout << res;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    init();
    process();
 
    return 0;
} 
