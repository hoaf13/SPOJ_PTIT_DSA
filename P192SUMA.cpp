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
 
ll d;
ll a[limit];
ll n;
ll res = 0;
 
void init(){
	cin >> n >> d;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
 
void process(){
	for(int i=1;i<n;i++){
		if (a[i-1] >= a[i]){
			ll tmp = a[i-1] - a[i];
			res += (ll)tmp/d + 1;  	
			a[i]+= ((ll)tmp/d + 1)*d;
		}  
	}
	cout << res;
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
} 
