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
const int limit = 1e5+5;
 
ll n;
ll a[limit] = {0};
vll v;
ll cnt0 = 0;
 
 
void init(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
}
 
void process(){
	int l[limit]= {0};
	int r[limit]= {0};
	int res = limit;
	for(int i=1;i<=n;i++){
		if (a[i] >= 0) l[i] = l[i-1] + 1;
		else l[i] = l[i-1];
	}
	for(int i=n;i>=1;i--){
		if (a[i] <= 0) r[i] = r[i+1] + 1;
		else r[i] = r[i+1];
	}
 
	for(int i=1;i<=n-1;i++){
		res = min(res , l[i] + r[i+1]);
	}
	cout << res;
}
 
 
int main(){
 
	faster();
	
	init();
	process();
 
	return 0;
} 
