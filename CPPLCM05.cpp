#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        long long a,b;
        cin >> s >> a >> b ;
        long long iter = __gcd(a,b);
        for(int i=0;i<iter;i++){
            cout << s;
        }
        cout << endl;
    }
    return 0;
} 
