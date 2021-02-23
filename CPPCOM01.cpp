#include<bits/stdc++.h>
 
using namespace std;
 
int n;
int a[21];
bool OK;
 
void init(){
    cin >> n;
    OK = true;
    for(int i=1;i<=n;i++) a[i] = 0;
}
 
void show(){
    for(int i=1;i<=n;i++) cout << a[i];
    cout << " ";
}
 
void nextGen(){
    int i = n;
    while(i > 0 && a[i]){
        a[i] = 0;
        i--;
    }
    if (i > 0) a[i] = 1;
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
} 
