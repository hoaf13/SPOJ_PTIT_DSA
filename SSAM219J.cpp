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
 
int n;
ll a[limit];
ll k;
 
void init(){
	cin >> n >> k ;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
 
int Bsearch(int l , int r , ll x){
	while(l <= r){
		int mid = (r+l)/2;
		if (a[mid] == x){
			return mid;
		}
		else if (a[mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}
 
void process(){
	
	if (k == 0){
		for(int i=0;i<n;i++){
			if (a[i] == 0){
				cout << "YES\n";
				return;	
			}
		}
		cout << "NO\n";
		return;
	}
	
	for(int i=1;i<n;i++){
		a[i] += a[i-1];
	}
	
	for(int i=0;i<n;i++){
		if (a[i] - k == 0){
			cout << "YES\n";
			return ;
		}
		if ( a[i] - k > 0){
			int indez = Bsearch(0,n-1,a[i] - k);
			if (indez != -1){
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}
 
 
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--){
	
		init();
		process();
	}
	return 0;
}
 
  
