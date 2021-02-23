#include<bits/stdc++.h>
 
using namespace std;
 
int n;
bool visited[3003] = {false};
 
void init(){
    cin >> n;
    for(int i=0;i<n;i++){
        int tmp ;
        cin >> tmp;
        visited[tmp] = true;
    }
}
 
void process(){
    for(int i=1;i<=3000;i++){
        if (visited[i] == false){
            cout << i ;
            return ;
        }
    }
    cout << n+1;
}
 
 
int main(){
 
    init();
    process();
 
    return 0;
} 
