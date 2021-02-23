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
 
ll n,s;
 
int calz(ll x){
	int ans = 0;
	while (x > 0){
		ans += x%10;
		x/=10;
	}
	return ans;
}
 
void init(){
	cin >> n >> s;
}
 
void process(){
	ll k = s;
	while(k - calz(k) < s){
		k++;
	}
	ll res = n - k + 1;
	if (res <= 0) cout << 0;
	else cout << res;
	
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}
 
