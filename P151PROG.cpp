/*
 * =====================================================================================
 *
 *       Filename:  test115.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/09/2019 00:40:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  hoaf13 (paxd), gam.nhosmiles2000@gmail.com
 *        Company:  Posts and Telecommunications Institute of Technology
 *
 * =====================================================================================
 */
 
#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> II;
 
const ll limit = 1e6+6;
 
ll n;
vector< vector<ll> > v(limit);
vector< vector<ll> > c(limit);
vector< ll > res(limit,0);
 
 
bool visited[limit] = {false};
bool appearz[limit] = {false};
stack<ll> stk;
 
void tham(int x){
    if (visited[x] == false){
        visited[x] = true;
        for(int i=0;i<v[x].size();i++){
            int tmp = v[x][i];
            tham(tmp);
        }
        stk.push(x);
    }
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
  cin >> n;
  if (n % 2 == 0){
    for(int i=0;i<n;i++){
        ll b,e;
        cin >> b >> e;
        v[b].push_back(e);
        c[e].push_back(b);
    } 
  
    int indez = 2;
    ll tmp = 0;
    while(v[tmp].size() != 0){
        res[indez] = v[tmp][0];
        tmp = v[tmp][0];
        indez+=2;
    }
    
    indez = n-1;
    tmp = 0;
    while(c[tmp].size() != 0){
        res[indez] = c[tmp][0];
        tmp = c[tmp][0];
        indez-=2;
    }
    for(int i=1;i<=n;i++){
        cout << res[i] << " ";
    }
    return 0;
  }
 
 
    for(int i=0;i<n;i++){
        ll b,e;
        cin >> b >> e;
        appearz[b] = true;
        appearz[e] = true;
        v[b].push_back(e);
    }   
    int indez = 2;
    ll tmp = 0;
    
    while(v[tmp][0] != 0){
        res[indez] = v[tmp][0];
        tmp = v[tmp][0];
        indez+=2; 
        visited[tmp] = true;
    } 
 
    for(int i=0;i<limit;i++){
         if (appearz[i]) tham(i);
    }
 
    indez = 1;
    while (stk.size()){
        res[indez] = stk.top();
        stk.pop();
        indez+=2;
    }
    
    for(int i=1;i<=n;i++){
        cout << res[i] << " ";
    }
 
  return 0;
}
 
 
