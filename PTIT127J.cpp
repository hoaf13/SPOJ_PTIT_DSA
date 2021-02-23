#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int A[1000006] = {0};
    int B[1000006] = {0};
    if (s[0] == 'B') A[0]++;
    else B[0]++;
    for(int i=1;i<n;i++){
        if (s[i] == 'A'){
            A[i] = A[i-1];
            B[i] = min(A[i-1] , B[i-1]) + 1;
        }
        else{
            A[i] = min(A[i-1] , B[i-1]) + 1;
            B[i] = B[i-1]; 
        }
    }
    cout << A[n-1];
   
    return 0;
} 
