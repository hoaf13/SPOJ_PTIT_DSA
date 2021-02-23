/*
 * =====================================================================================
 *
 *       Filename:  test111.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/09/2019 01:08:05
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
 
int main(){
  string s;
  while(cin >> s){
    int cnt = 0;
    int f[26] = {0};
    for(int i=0;i<s.length();i++){
      f[s[i] - 'a']++;
    }
    for(int i=0;i<26;i++){
      if(f[i] % 2 == 1) cnt++;
    }
    if(cnt<2 || cnt%2 == 1) cout << "First\n";
    else cout << "Second\n";
  }
    return 0;
}
 
