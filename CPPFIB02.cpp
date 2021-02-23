#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    vector<long long>a;
    long long n1=0,n2=1,n3;
    a.push_back(n1);
    a.push_back(n2);
    for (long long i = 0; i <= 89; i++) {
        n3 = n1 + n2;
        a.push_back(n3);
        n1 = n2 ;
        n2 = n3;
    }
    // for(int i=0;i<a.size();i++) cout << a[i] << " ";
    while(t--) {
        long long n,d=0;
        cin>>n;
        for(long long i=0;i<a.size();i++){
            if(n==a[i]){
                cout<<"YES";
                d=1;
                break;
            }
        }
        if(d==0) cout<<"NO";
        cout<<endl;
    }
} 
