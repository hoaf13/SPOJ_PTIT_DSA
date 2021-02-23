#include <bits/stdc++.h>
#define NMAX 10000000
using namespace std;
 
int c[NMAX + 10] = {};
 
void init(){
    for (int i=2; i<=NMAX; i++){
        if (c[i] == 0)
            for (int j=i; j<=NMAX; j+=i){
                c[j]++;
            }
    }
    
}
 
int main(){
    cin.tie(0);
    init();
    int count = 0;
    int test;
    cin >> test;
    while (test--){
        count++;
        int a, b, k;
        cin >> a >> b >> k;
        int res = 0;
        for (int i=a; i<=b; i++){
            if (c[i] == k) res++;
        }
        cout << "Case #" << count << ": " << res << endl;
    }
} 
