#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x){
	if(x<2) return false;
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0) return false;
	return true;
}
int main(){
	int test; cin>>test;
	while(test--){
		int n, cnt=0; cin>>n;
		if (isPrime(n)) ++cnt;
		for (int i=2; i<=n/2; i++){
    		int sum=0;
    		if (isPrime(i)){
    			for (int j=i; j<=n; j++){
    				if (isPrime(j)==1){
    					sum+=j;
    					if (sum==n) ++cnt;
    					if (sum>n) break;
    				}
    			}
    		}
    	}
    	cout<<cnt<<'\n';
	}
}
 
