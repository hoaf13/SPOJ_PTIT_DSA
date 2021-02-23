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
 
ll n,k;
ll limit = 1e12;
 
void init(){
	cin >> n >> k;
}
 
void process(){
	ll A = 1;
	ll B = -(2*n + 3);
	ll C = (n*n + n) - 2*k;
	ll delta = B*B - 4*A*C;
//	cout << delta << endl;
	ll x1 = (-B + sqrt(delta))/2*A;
	ll x2 = (-B - sqrt(delta))/2*A;
	cout << min(x1,x2);
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}  
