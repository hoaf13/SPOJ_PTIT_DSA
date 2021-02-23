#include<bits/stdc++.h>
 
using namespace std;
 
 
void process(){
    int m,n,a,b;
    cin >> m >> n >> a >> b;
 
    int res = 0;
    for(int i = m ; i <= n ;i++){
        if (i % a == 0 || i % b == 0) res++;
    }  
    cout << res << endl;
}
 
int main(){
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    
 
    return 0;
} 
