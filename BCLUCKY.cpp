/*
 * =====================================================================================
 *
 *       Filename:  test20.cpp
 *
 *    Description:  BCLUCKY.cpp
 *
 *        Version:  1.0
 *        Created:  24/09/2019 13:19:13
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
 
ll res = 0;
map<ll , ll > mapz;
ll n,x;
ll sumz = 0;
 
void init(){
    cin >> n >> x;
    for(int i=0;i<n;i++){
      ll tmp;
      cin >> tmp;
      mapz[tmp]++;
    }
    
}
 
void process(){
  sumz = x*n;
  ll valz = 0;
  ll indez = 9999999999;
  map<ll, ll>::iterator it;
  for(it = mapz.begin(); it != mapz.end();it++){
      ll u , v;
      u = it -> first;
      v = it -> second;
      if (v <= indez){
        valz = u;
        indez = v;
      } 
 }
  res = sumz - (valz * indez);
  cout << res;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
  init();
  process();
 
  return 0;
}
 
 
