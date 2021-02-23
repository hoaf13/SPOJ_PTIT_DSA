/*
 * =====================================================================================
 *
 *       Filename:  test18.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  23/09/2019 10:24:23
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
ll n;
vector<ll> a;
ll res = 1;
 
void init(){
  cin >> n;
  a.resize(n);
  for(int i=0;i<n;i++) cin >> a[i];
}
 
void process(){
  sort(a.begin(), a.end());
  
  ll tmp = 0;
  for(int i=1;i<n;i++){
    tmp += a[i-1];
    if (a[i] >= tmp){
      res++;
    }else{
      tmp -= a[i];
    }
  } 
  cout << res;
 
}
 
int main(){
 
  init();
  process();
 
  return 0;
}
 
