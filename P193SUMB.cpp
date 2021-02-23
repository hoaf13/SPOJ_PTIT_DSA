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
const int limit = 1e6+6;
 
ll n;
 
void init(){
	cin >> n;
}
 
bool isPrime(ll a){
	if (a < 2) return false;
	for(int i=2;i<=sqrt(a);i++){
		if ( a%i == 0 ) return false;
	}
	return true;
}
 
bool isCP(ll a){
	if (a == 1) return false;
	ll k = sqrt(a);
	if (k*k == a) return true;
	return false;
}
 
bool checkz(ll a){
	for(ll i=1;i<=sqrt(a);i++){
		if (a%i == 0 ){
			if (isCP(i) || isCP(a/i)) return false;
		}
	}
	return true;
}
 
void process(){
	ll res = 1;
	if (isPrime(n)){
		cout << n;
		return;
	}
	
	priority_queue<ll> heap;
	for(int i=1;i<=sqrt(n);i++){
		if (n%i == 0){
			if (i == sqrt(n)){
				heap.push(i);
				break;
			}
			heap.push(i);
			heap.push(n/i);
		}
	}
	while(heap.size()){
		if (checkz(heap.top())){
			res = heap.top();
			break;
		}
		else heap.pop();
	}
	cout << res;
}
 
 
int main(){
 
	faster();
	
	init();
	process();
 
	return 0;
}
 
  
