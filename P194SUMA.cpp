#include<bits/stdc++.h>
 
using namespace std;
 
priority_queue<int , vector<int> , greater<int> > heap;
int n,k;
 
void init(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        heap.push(tmp);
    }
}
 
void process(){
    while(k--){
        int u = heap.top();
        heap.pop();
        u = -u;
        heap.push(u);
    }    
    long long sumz = 0;
    while(heap.size()){
        sumz += heap.top();
        heap.pop(); 
    }
    cout << sumz;
}
 
int main(){
 
    init();
    process();
    return 0;
}  
