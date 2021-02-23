#include<bits/stdc++.h>
 
using namespace std;
 
int n;
int a[20];
 
void init(){
    cin >> n;
    for(int i=1;i<=n;i++) a[i] = 0;
}
 
bool isTheLastGen(){
    for(int i=1;i<=n;i++){
        if (a[i] == 0) return false;
    }
    return true;
}
 
void output(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}
 
void nextGen(){
    int i = n;
    while (i > 0 && a[i]){
        a[i] = 0;
        i--;
    }
    a[i] = 1;
}
 
void process(){
    while(isTheLastGen() == false){
        output();
        nextGen();
    }
    output();
}
 
int main(){
 
    init();
    process();
 
    return 0;
}
 
