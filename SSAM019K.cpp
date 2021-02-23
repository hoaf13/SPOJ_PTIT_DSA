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
 
ll n;
 
 
ll sumz(ll n){
	ll res = 0;
	while(n){
		res += n % 10;
		n /= 10;
	}
	return res;
}
 
void init(){
	cin >> n;
}
 
void process(){
	ll tmp = sumz(n);
	ll K = 0;
	for (ll i = 2; i*i <= n; i++){
		if(n % i == 0){
			while(n % i == 0){
				K += sumz(i);
				n /= i;
			}
		}
	}
	if(n != 1) K += sumz(n);
	if(K == tmp) cout << "YES";
	else cout << "NO";
}
 
 
int main(){
	faster();
	
	init();
	process();
	
	return 0;
	
}  
