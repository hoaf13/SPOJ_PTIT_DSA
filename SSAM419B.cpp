#include<bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
 
void bfs(int u, vector<vi> edge, vector<bool> &visited){
    queue<int> Q;   
    Q.push(u);
    visited[u] = true;
    while(Q.size()){
        int v = Q.front();
        cout << v << " ";
        Q.pop();
        for(int i=0;i<edge[v].size();i++){
            if (!visited[edge[v][i]]){
                Q.push(edge[v][i]);
                visited[edge[v][i]] = true;
            }
        }
    }
}
 
void process(){
    int n, m, u;
    cin >> n >> m >> u;
    vector<vi> edge(n+1);
    vector<bool> visited(n+1, false);
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    bfs(u, edge, visited);
    cout << endl;
}
 
int main(){
 
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
} 
