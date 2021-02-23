#include<bits/stdc++.h>
 
using namespace std;
 
void process(){
    long long n;
    cin >> n;
    int tmp = n/4;
    if (n % 4 != 0) tmp++;
    for(int i=0;i<n-tmp;i++) cout << 9;
    for(int i=0;i<tmp;i++) cout << 8;
    cout << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) process();
 
    return 0;
}  
