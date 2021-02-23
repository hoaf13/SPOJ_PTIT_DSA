#include<bits/stdc++.h>
 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
 
ll fibo[100] = {0};
 
ll k;
int n;
 
ll findFibo(int n){
	if (n == 1 || n == 2) return 1;
	if (fibo[n] ) return fibo[n];
	fibo[n] = findFibo(n-1) + findFibo(n-2);
	return fibo[n];
}
 
 
void preprocess(){
	findFibo(92);
}
 
void init(){
	cin >> n;	
	cin >> k;	
}
 
int Try(ll k,int n){
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3 && k == 1) return k;
	if (n == 3 && k == 2) return k;
	if (n == 4){
		if (k%2 != 0) return 2;
		else return 1;
	}
	if (k > fibo[n-2]) return Try( k - fibo[n-2] , n-1 );
	else return Try(k,n-2);
}
 
void process(){
	int l = Try(k,n);
	if (l == 1){
		cout << "A\n";
	}
	else cout << "B\n";
}
 
int main(){
 
	faster();
	preprocess();
	int T;
	cin >> T;
	while(T--){
		init();
		process();
	}
	return 0;
}
  
