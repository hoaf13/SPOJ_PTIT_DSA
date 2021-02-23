/*
 * =====================================================================================
 *
 *       Filename:  test107.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/09/2019 22:37:07
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
 
ll a,b;
ll tmp;
vector<ll> v;
 
ll GCD(ll c , ll d){
  while(a*b != 0){
    if (a > b){
      a%=b;
    }
    else{
      b%=a;
    }
  }
  return a+b;
}
 
void init(){
  cin >> a >> b;
  tmp = GCD(a,b);
  ll k = sqrt(tmp);
  for(int i=1;i<=k;i++){
    if (tmp % i == 0){
      v.push_back(i);
      v.push_back(tmp/i);
    }
  }  
  if (k*k == tmp) v.push_back(k);
  sort(v.begin(),v.end());
}
 
int Bsearch(ll c , ll d){
  int l = 0;
  int r = v.size() - 1;
  int ans = -1;
  while(l <= r){
    int  mid = (l+r) >> 1;
    if (v[mid] <= d){
      if (v[mid] >= c) ans = mid;
      l = mid + 1;
    }
    else{
      r = mid - 1;
    }
  }
  return ans;
}
 
void process(){
 
  ll l,r;
  cin >> l >> r;
  if (Bsearch(l,r) != -1) cout << v[Bsearch(l,r)];
  else cout << -1;
  cout << endl;
} 
 
int main(){
 
  init();
  int Q;
  cin >> Q;
  while(Q--){
    process();
  }
 
  return 0;
}
 
 
 
 
