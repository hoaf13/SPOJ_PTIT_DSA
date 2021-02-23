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
 
int T; 
int n;
 
ll findFibo(int n){
	if (n == 1 || n == 2) return 1;
	if (fibo[n] ) return fibo[n];
	fibo[n] = findFibo(n-1) + findFibo(n-2);
	return fibo[n];
}
 
void init(){
	cin >> n;
}
 
void process(){
	cout << fibo[n] << endl;
 
}
 
int main(){
 
	faster();
	fibo[1] = 1;
	fibo[2] = 1;
	findFibo(92);
	cin >> T;
	while(T--){
		init();
		process();
	}
	return 0;
}
  
