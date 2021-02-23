/*
 * =====================================================================================
 *
 *       Filename:  BCBIN.cpp
 *
 *    Description:  DSU
 *
 *        Version:  1.0
 *        Created:  08/09/2019 22:37:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  hoaf13 (paxd), gam.nhosmiles2000@gmail.com
 *        Company:  Posts and Telecommunications Institute of Technology
 *					-ProPTIT
 * =====================================================================================
 */
 
#include<iostream>
 
using namespace std;
 
const int N = 10004;
int par[N], rankz[N];
 
 
void init() {
    for (int i=0; i<N; i++) {
        par[i] = i;
        rankz[i] = 0;
    }
}
 
int find(int u) {
    if (par[u] != u) par[u] = find(par[u]);
    return par[u];
}
 
void join(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return;
    if (rankz[u] == rankz[v]) rankz[u]++;
    if (rankz[u] < rankz[v]) par[u] = v;
    else par[v] = u;
}
 
int main(){
    init();
    int Q;
    cin >> Q;
    while(Q--){
        int u,v,t;
        cin >> u >> v >> t;
        if (t == 1){
            join(u,v);
        }
        else{
            u = find(u);
            v = find(v);
            if (u == v){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
 
 
}  
