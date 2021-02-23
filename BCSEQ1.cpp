/*
 * =====================================================================================
 *
 *       Filename:  test8.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/09/2019 10:41:59
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
 
 
void process(){
  ll stt;
  ll n;
 
  cin >> stt >> n;
  ll sumz = 0;
  vector<ll>a;
  vector<int>uoc;
  a.resize(n+1);
  vector<ll> dp;
  dp.resize(n+1,0);
  
  for(int i=1;i<=n;i++) cin >> a[i],sumz += a[i];
  dp[1] = a[1];
  for(int i=2;i<=n;i++) dp[i] = dp[i-1] + a[i];
 
 
  int k = sqrt(sumz);
  if (k*k == sumz) uoc.push_back(k);
  for(int i=1;i<=k;i++){
    if (sumz % i == 0){
      uoc.push_back(i);
      uoc.push_back(sumz / i);
    }
  }
  sort(uoc.begin(),uoc.end());
  for(int i=0;i<uoc.size();i++){
    // cout << "uoc: " << uoc[i] << endl;
    int indez = 0;
    int cnt = 0;
    for(int j=1;j<=n;j++){
      if (dp[j] - dp[indez] > uoc[i]) break;
      if (dp[j] - dp[indez] == uoc[i]){
          cnt += (j - indez);
          indez = j;
      }
    }
    if (cnt == n){
      cout << stt << " " << uoc[i] << endl;
      return ;
    }
  }
 
}
 
int main(){
  int T;
  cin >> T;
  while(T--){
    process();
  }
  return 0;
}
 
