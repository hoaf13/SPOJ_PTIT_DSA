#include<bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    
    while(1){
        int n,m;
        long double a[1001][21];
        cin >> m >> n;
        if (n == m && m == 0 ) return 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
            }
        }
        long double k = 0;
        for(int i=1;i<=m;i++){
            if (k < a[1][i]) k = a[1][i];
            if (k < -a[1][i]) k = -a[1][i];
        }
        for(int i=2;i<=n;i++){
            long double tmp = 0;
            for(int j=1;j<=m;j++){
                if (k != 0){
                    a[i][j] /= k;
                }
                if (tmp < a[i][j]) tmp = a[i][j];
                if (tmp < -a[i][j]) tmp = -a[i][j];
            }
            k = tmp;
        }
 
        vector<long double> ds;
        for(int i=1;i<=m;i++){
            long double tmp = 1;
            for(int j=1;j<=n;j++){
                tmp *= a[j][i];
            }
            ds.push_back(tmp);
        }
        int res = 0;
        for(int i=0;i<ds.size();i++){
            if (ds[res] <= ds[i]){
                res = i;
            }
        }
        cout << res + 1 << endl;
    }
    return 0;
} 
