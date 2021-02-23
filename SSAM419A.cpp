#include<bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
 
void dfs(int u, vector<vi> edge, vector<bool> &visited){
    cout << u << " ";
    visited[u] = true;
    for(int i=0;i<edge[u].size();i++){
        if (!visited[edge[u][i]]) dfs(edge[u][i] , edge , visited);
    }
}
 
void process(){
    int n,m,u;
    cin >> n >> m >> u;
    vector<vi> edge(n+1);
    vector<bool> visited(n+1, false);
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    dfs(u, edge , visited);
    cout << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
} 
