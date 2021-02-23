#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
 
    int n;
    int res = 0;
    cin >> n;
    vector<int> a(n*2);
    vector<bool> visited(n*2, false);
    
    for(int i=0;i<n*2;i++) cin >> a[i];
    for(int i=0;i<n*2-1;i++){
        if (visited[a[i]] == false){
            visited[a[i]] = true;
            int cnt = 0;
            for(int j=i+1;j<n*2;j++){
                if (visited[a[j]] == false){
                    cnt += 1;
                }
                else if (a[i] == a[j]) res += cnt;
            }    
        }
    }
    cout << res;
 
    return 0;
} 
