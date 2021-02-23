#include<bits/stdc++.h>
 
using namespace std;
 
typedef pair<int , int> II;
int xqX[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
int xqY[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 
int res = 0;
 
void bfs(int x1, int y1, int x2, int y2){
    queue<pair<II , int>> Q;
    int cnt = 0;
    Q.push(make_pair(make_pair(x1,y1), cnt)); 
    while(Q.size()){
        pair<II , int> u = Q.front();
        Q.pop();
        if (u.first.first == x2 && u.first.second == y2){
            res = u.second;
            return;
        }
        for(int i=0;i<8;i++){
            int x = u.first.first + xqX[i];
            int y = u.first.second + xqY[i];
            int z = u.second + 1;
            if (x >= 1 && y >= 1 && x <= 8 && y <= 8){
                Q.push(make_pair(make_pair(x,y), z));
            }
        }
    }
}
 
void process(){
    res = 99999999;
    char xx1, xx2;
    int y1,y2;
    cin >> xx1 >> y1 >> xx2 >> y2;
    int x1 = xx1 - 'a' + 1;
    int x2 = xx2 - 'a' + 1;
    bfs(x1,y1,x2,y2);
    cout << res << endl;
 
}
 
 
int main(){
 
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
} 
