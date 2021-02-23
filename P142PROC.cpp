#include<bits/stdc++.h>
 
using namespace std;
 
int r1,c1,r2,c2;
int res1 = 0 , res2 = 0 , res3 = 0;
 
void init(){
    cin >> r1 >> c1 >> r2 >> c2;
}
 
void process(){
    if (r1 == r2 || c1 == c2) res2 = 1;
    else res2 = 2;
    
    res3 = max(abs(r1 - r2) , abs(c1 - c2));
 
    if ( (r1 - c1 == r2 - c2) || (r1 + c1 == r2 + c2)) res1 = 1;
    else if ( (r1+c1) % 2 == (r2+c2) % 2 ) res1 = 2 ;
    else res1 = 0;
    
    cout << res2 << " " << res1 << " " << res3;
}
 
int main(){
 
    init();
    process();
 
    return 0;
} 
