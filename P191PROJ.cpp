#include<bits/stdc++.h>
 
using namespace std;
 
int n,m;
char s[1001][1001];
char x[1001][1001];
int xqY[] = {-1,-1,-1, 0,0,1,1,1};
int xqX[] = {-1, 0,+1,-1,1,-1,0,1};
 
void init(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> s[i][j];
            x[i][j] = '*';
        }
    }
}
 
void process(){
    bool flag = false;
    for(int i=2;i<n;i++){
        for(int j=2;j<m;j++){
            bool flag2 = true;
            for(int k=0;k<8;k++){
                int row = i + xqY[k];
                int col = j + xqX[k];
                if (s[row][col] != '#'){
                    flag2 = false;
                    break;
                }
            }           
            if (flag2){
                for(int k=0;k<8;k++){
                    int row = i + xqY[k];
                    int col = j + xqX[k];
                    x[row][col] = '#';
                }        
            }
        }
    }
 
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if (s[i][j] != x[i][j]){
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}
 
int main(){
    init();
    process();
 
    return 0;
} 
