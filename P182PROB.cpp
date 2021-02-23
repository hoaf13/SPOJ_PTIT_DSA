#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
 
long long ChinhHop(int k, int n){ //tinh chinh hop
    long long res=1;
    for (int i=1;i<=k;i++,n--)
        res=res*n/i;
    return res;
}
 
int main(){
    int n;
    cin>>n;
    long a[n],i;
    for (i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    // Tru?ng h?p n?u 3 s?= nhau
    if(a[0]==a[1] && a[1]==a[2]){
            int dem=0;
            for (i=0;i<n;i++){
                    if(a[i]==a[0]) dem++;
                    else if(a[i]>a[2]) break;
                }
            cout<<ChinhHop(3,dem);
        }
    else if(a[0]==a[1] && a[1]!=a[2] || (a[0]!=a[1]) && a[1]==a[2]){
        // Tru?ng h?p a0=a1,a1!=a2
        if(a[0]==a[1] && a[1]!=a[2]){
            int dem1=0,dem2=0;
            for (i=0;i<n;i++){
                if(a[i]==a[0]) dem1++;
                else if(a[i]==a[2]) dem2++;
                else if(a[i]>a[2]) break;
            }
            cout<<ChinhHop(2,dem1)*ChinhHop(1,dem2);
        }
        //Tru?ng h?p a0!=a1,a1=a2
        else if((a[0]!=a[1]) && a[1]==a[2]){
            int dem1=0,dem2=0;
            for (i=0;i<n;i++) {
                if(a[i]==a[0]) dem1++;
                else if(a[i]==a[2]) dem2++;
                else if(a[i]>a[2]) break;
            }
            cout<<ChinhHop(1,dem1)*ChinhHop(2,dem2);
        }
    }
    else if(a[0]!=a[1] && a[1]!=a[2] && a[2]!=a[0]){
        // Tru?ng h?p 3 s? khÃ¡c nhau
        int dem1=0,dem2=0,dem3=0;
        for (i=0;i<n;i++){
            if(a[i]==a[0]) dem1++;
            else if(a[i]==a[1]) dem2++;
            else if(a[i]==a[2]) dem3++;
            else if(a[i]>a[2]) break;
        }
        cout<<ChinhHop(1,dem1)*ChinhHop(1,dem2)*ChinhHop(1,dem3);
    }
    return 0;
} 
