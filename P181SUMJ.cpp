#include<bits/stdc++.h>
 
using namespace std;
 
int x,y;
long long mtx[101][101] = {0};
vector<int> sieve(101, 0);
 
 
void init(){
    cin >> x >> y;
}
 
void preprocess(){
    for(int a = 0; a <= 100 ;a++){
        for(int b = a; b <= 100; b++){
            for(int i=0;i<101;i++) sieve[i] = 0;    
            long long res = 1;
            for(int i=a+1;i<=b;i++){
                int tmp = i;
                for(int j=2;j<=sqrt(tmp);j++){
                    while(tmp % j == 0){
                        sieve[j]++;
                        tmp /= j;
                    }
                }
                if (tmp != 1) sieve[tmp]++;
            }
            for(int j=0;j<=b;j++){
                res *= (sieve[j] + 1);  
            }
            mtx[a][b] = res;
        }
    }
}
 
void process(){
    cout << mtx[x][y] << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    preprocess();
    int T;
    cin >> T;
    while(T--){
        init();
        process();
    }
    return 0;
} 
