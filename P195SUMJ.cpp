#include<bits/stdc++.h>
 
using namespace std;
 
const int limit = 2e5+5;
 
long long n,k;
long long a[limit];
 
void init(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
 
long long calz(long long x){
    long long sumz = 0;
    int mid = n/2;
    for(int i=mid ;i < n ;i++){
        if (x - a[i] > 0) sumz += (x - a[i]);
        if (sumz > k) return false;
    }  
    if (sumz <= k) return true;
    return false; 
}
 
 
void process(){
    sort(a,a+n);
    long long l = a[0];
    long long r = a[n-1] + k;
    long long res;
 
    while (l<r){
        long long mid=(l+r+1)/2;
        if (calz(mid)){
            l=mid;
            res = l;
        }
        else{
            r=mid-1;
        }
    }
    cout << res;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
 
    init();
    process();
 
    return 0;
}  
