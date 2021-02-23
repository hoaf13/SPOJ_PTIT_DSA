#include <bits/stdc++.h>
 
using namespace std;
 
int n,k;
vector<string> ds;
int a[10] = {0};
int visited[10] = {false};
int res = 1e9;
 
void update(){
    int maz = 0;
    int miz = 1e9;
    for(int i=0;i<ds.size();i++){
        int tmp = 0;
        for(int j=1;j<=k;j++){
            tmp = tmp * 10 +  (ds[i][a[j]] - '0');
        }
        maz = max(maz,tmp);
        miz = min(miz,tmp);
    }
    res = min(res, maz - miz);   
}
 
void Try(int i){
    for(int j=1;j<=k;j++){
        if (visited[j] == false){
            visited[j] = true;
            a[i] = j;
            if (i == k){
                update();
            }
            else Try(i+1);
            visited[j] = false;
        }
    }
}
 
void init(){
    cin >> n >> k;
    ds.resize(n);
    for(int i=0;i<n;i++){
        cin >> ds[i];
        ds[i] = "0" + ds[i];
    }
};
 
void process(){
    Try(1);
    cout << res;
};
 
int main(){
 	ios_base::sync_with_stdio(0);
 	cin.tie(NULL);cout.tie(NULL);
    init();
    process();  
 
    return 0;
}  
