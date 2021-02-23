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
const ll MOD = 1e9+7;
ll a, b;
 
void init(){
	cin >> a >> b;
}
 
ll Pow(ll a , ll b){
	if (b == 0) return 1;
	if (b == 1) return a;
	if (b % 2 == 0){
		ll tmp = Pow((a*a)%MOD,(ll)b/2)%MOD;
		return tmp%MOD;
	}	
	if (b % 2 != 0){
		ll tmp = Pow((a*a)%MOD,(ll)b/2)%MOD;
		return (a*tmp)%MOD;
	}
}
 
void process(){
	cout << Pow(a,b) << endl;
 
}
 
int main(){
 
	faster();
	while( true ){
		init();
		if (a == 0 && b == 0) return 0;
		process();
	}
	return 0;
}
 
