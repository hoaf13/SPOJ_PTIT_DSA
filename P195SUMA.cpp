#include<bits/stdc++.h>
 
using namespace std;
 
const int limit = 2e5+5;
int n,k;
long long a[limit];
 
 
void init(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
 
void process(){
    sort(a,a+n);
    long long res;
    
    if (k == 0){
        res = 1;
    }else{
        res = a[k-1];
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if (a[i] <= res){
            cnt++;
        }
    }
    
    if (cnt != k || res < 1){
        cout << -1;
        return;
    }
    cout << res;
}
 
int main(){
 
    init();
    process();
 
    return 0;
}  
