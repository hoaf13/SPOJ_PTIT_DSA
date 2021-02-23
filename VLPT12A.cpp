#include<bits/stdc++.h>
 
using namespace std;
 
 
void process(){
    long long res = 99999999999;
    int n,m;
    cin >> n >> m;
    vector< vector<int> > a;
    a.resize(n+1);
    for(int i=1;i<=n;i++){
        a[i].resize(m+1);
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            long long tmp = 0;
            for(int k=1;k<=n;k++){
                for(int l=1;l<=m;l++){
                    tmp += (abs(k-i) + abs(l-j))*a[k][l];
                }
            }        
            res = min(res,tmp);
        }
    }
    cout << res << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    
 
 
    return 0;
} 
