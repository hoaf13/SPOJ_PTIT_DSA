#include<bits/stdc++.h>
 
using namespace std;
 
int n;
int a[21];
bool OK;
 
void init(){
    cin >> n;
    OK = true;
    for(int i=1;i<=n;i++) a[i] = i;
}
 
void show(){
    for(int i=1;i<=n;i++) cout << a[i] ;
    cout << " ";
}
 
void nextGen(){
    int i = n-1;
    while(i > 0 && a[i] > a[i+1]) i--;
    if (i > 0){
        int k = n;
        while(a[k] < a[i]){
            k--;
        }
        int tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
        int l = i+1;
        int r = n;
        while(l <= r){
            int t = a[l];
            a[l] = a[r];
            a[r] = t;
            l++;
            r--;
        }
    }else OK = false;
}
 
int main(){
 
    int T;
    cin >> T;
    while(T--){
        init();
        while(OK){
            show();
            nextGen();
        }
        cout << endl;
    }
 
    return 0;
} 
