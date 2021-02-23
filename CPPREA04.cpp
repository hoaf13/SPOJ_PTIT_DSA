#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(), a.end());   
    int indez = 0;
    for(int i=0;i<n;i+=2){
        b[i] = a[indez++]; 
    } 
    for(int i=1;i<n;i+=2){
        b[i] = a[indez++];
    }
    for(int i=0;i<n;i++) cout << b[i] << " ";
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
