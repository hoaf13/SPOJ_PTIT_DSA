#include<bits/stdc++.h>
 
using namespace std;
 
int n;
int a[100005];
int cntH = 0;
int cntL = 0;
 
void process(){
    cin >> n;
    if (n == 0){
        cout << 0 << ' ' << 0;
        return ;
    }
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if (n == 1){
        cout << 1 << " " << 0;
        return;
    }
    int l = 0 ;
    int r = n-1;
    bool flag = true;
    while(1){
        if (l == r){
            if (flag){
                cntH++;
            }
            break;
        }
        if (l == r-1){
            cntH++;
            cntL++;
            break;
        }
        int tmp = min(a[l], a[r]);
        a[l] -= tmp;
        a[r] -= tmp;
        if (a[l] == 0 && a[r] == 0) flag = true;
        else flag = false;
        if (a[l] == 0){
            l++;
            cntH++;
        }
        if (a[r] == 0){
            r--;
            cntL++;
        }
        
    }
    cout << cntH << " " << cntL;
}
 
int main(){
 
    process();
 
    return 0;
}
  
