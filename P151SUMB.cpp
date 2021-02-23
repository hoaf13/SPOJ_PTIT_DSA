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
 
 
int main(){
    int N;
    cin>>N;
    int minB = 5000;
    for (int i=0; i<=(N/3); i++){
        int kg = i*3;
        int kgRe = N - (kg);
        if (kgRe%5==0){
            int B = i+kgRe/5;
            if (B<minB){
                minB = B;
            }
        }
    }
    if (minB==5000) cout<<-1;
    else
       cout<<minB;
    return 0;
}
 
