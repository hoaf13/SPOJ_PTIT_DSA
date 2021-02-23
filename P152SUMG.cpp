#include <bits/stdc++.h>
using namespace std;
 
int nto( int n){
	if( n < 2 )	return 0;
	for( int i = 2; i <= sqrt(n); i++){
		if( n % i==0) return 0;
	}
	return 1;
} 
 
int check(int n, int m){
	int test=0;
	for( int i = n+1; i < m; i++){
		if(nto(i) == 1 ){
			test=1;
			break;
		}
	}
	if(test == 1) return 0;
	else return 1;
}
 
int main(){
	int m,n;
	cin>>n>>m;
	if(nto(m) == 1 && check(n,m) == 1) cout<<"YES";
	else cout<<"NO";
	return 0;
} 
