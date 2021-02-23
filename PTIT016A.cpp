#include<bits/stdc++.h>
 
using namespace std;
 
long long A,B,d,N,i,maz,max1,N1;
 
void init(){
    cin >> A >> B;
}
 
void process(){
 
    if(A<B) swap(A,B);
    if(A==B) {
        cout << 1;
        return ;
    }
    d=A-B;
    N=(B/d+1)*d-B; 
    maz=(A+N)/__gcd(A+N,B+N)*(B+N);
     
    for(long long x=2;x*x<=d;x++)
    if(d%x==0){
             
            N1=(B/x+1)*x-B; 
            if(N1<N){
               max1=(A+N1)/__gcd(A+N1,B+N1)*(B+N1);
               if(maz>=max1) {maz=max1;N=N1;}
            }
            long long y=d/x;
             
            N1=(B/y+1)*y-B; 
            if(N1<N){
            long long max1=(A+N1)/__gcd(A+N1,B+N1)*(B+N1);
            if(maz>=max1) {maz=max1;N=N1;}           
            }
    }
    cout<<N;      
}
 
int main(){
 
    init();
    process();
 
    return 0;
} 
