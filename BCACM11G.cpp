#include<bits/stdc++.h>
 
using namespace std;
 
int n,k;
int a[102] = {0};
int res = 0;
 
void init(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
}
 
void Try(int i , int k , int cnt ){
    if ( cnt == k){
        res++;
    }
    else{
        for(int j=i+1;j<=n;j++){
            
            if (a[i] < a[j]){
                Try(j,k,cnt + 1);
            }
            else continue;
           
        }
    }
}
 
void process(){
    res = 0;
    for(int i=1;i<=n;i++){
        Try(i,k,1);
    }
    
    cout << res << endl;
}
 
int main(){
 
    int T;
    cin >> T;
    while(T--){
        init();
        process();
    }
    return 0;
 
} 
