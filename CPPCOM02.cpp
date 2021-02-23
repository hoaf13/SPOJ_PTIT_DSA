#include<bits/stdc++.h>
 
using namespace std;
 
int n,k;
int a[21];
bool OK; 
 
 
void init(){
    cin >> n >> k;
    OK = true;
    for(int i=1;i<=k;i++) a[i] = i;
}
 
void show(){
    for(int i=1;i<=k;i++){
        cout << a[i];
    }
    cout << " ";
}
 
void nextGen(){
    int i=k;
    while(i > 0 && a[i] == n-k+i) i--;
    if (i > 0){
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j] = a[i] + j - i;
        }
    }
    else OK = false;
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
