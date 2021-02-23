#include <iostream>
#include <algorithm>
using namespace std;
 
struct data {
    string a;
};
 
int cmp (data a, data b) {
    if ((a.a+b.a)<(b.a+a.a)) return 1;
    else return 0;
}
 
main () {
    int t;
    cin>>t;
 
    int m;
    struct data ma[15];
    for (int i=1; i<=t; i++){
        cin>>m;
        for (int j=1; j<=m; j++){
            cin>>ma[j].a;
        }
        sort (ma+1, ma+m+1, cmp);
        string in="";
        for (int j=1; j<=m; j++) {
            in+=ma[j].a;
        }
        cout<<in<<endl;
    }
}  
