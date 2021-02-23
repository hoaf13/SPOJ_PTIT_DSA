/*
 * =====================================================================================
 *
 *       Filename:  PTIT126G.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  11/09/2019 01:26:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  hoaf13 (paxd)
 *        Company:  Posts and Telecommunications Institute of Technology
 *
 * =====================================================================================
 */
 
#include<bits/stdc++.h>
 
using namespace std;
 
const int oo = 1e9;
 
int n,m;
vector<int> a;
vector<int> f;
 
void init(){
  cin >> n >> m;
  a.resize(n);
  f.resize(m+1);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<=m;i++) f[i] = oo;
}
 
void process(){
  f[0] = 0;
  for(int i=0;i<=m;i++){
    for(int j=0;j<n;j++){
      if(i - a[j] >= 0){
        f[i] = min(f[i] , f[i-a[j]] + 1);
      } 
    }
  }
  if (f[m] != oo) cout << f[m];
  else cout << -1;
}
 
int main(){
  
  init();
  process();
 
  return 0;
}
  
 
