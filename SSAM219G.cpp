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
int a[limit];
 
void init(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
 
void process(){
	stack<int> L;
	stack<int> R;
	int leftz[n];
	int right[n];
	L.push(0);
	for(int i=0;i<n;i++){
		while(L.size() && a[L.top()] >= a[i]){
			L.pop();
		}
		if (L.empty()){
			leftz[i] = 0;
		}else leftz[i] = L.top()+1;
		L.push(i);
	}
	
	R.push(n-1);
	for(int i=n;i>=0;i--){
		while(R.size() && a[R.top()] >= a[i]){
			R.pop();
		}
		if (R.empty()){
			right[i] = n-1;
		}else right[i] = R.top()-1;
		R.push(i);
	}
	
	ll res = 0;
	for(int i=0;i<n;i++){
		res = max(res , (ll)(1 + right[i] - leftz[i])*a[i]);
	}
	cout << res << endl;
	
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
 
  
