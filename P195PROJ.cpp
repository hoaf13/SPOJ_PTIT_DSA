#include<bits/stdc++.h>
 
using namespace std;
 
int limit = 1e6;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    vector<int> b(n+1,limit);
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            b[i] = min(b[i] , a[i][j]);
        }
    }
    
    int res = *max_element(b.begin()+1 , b.end());
    cout << res;
 
} 
