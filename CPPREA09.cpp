#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<int> res(n);
    for(int i=1;i<n-1;i++){
        res[i] = a[i-1]*a[i+1];
    }
    res[0] = a[0]*a[1];
    res[n-1] = a[n-1] * a[n-2];
    for(int i=0;i<n;i++) cout << res[i] << " ";
    cout << endl;
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
