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
 
int n,k;
int a[102];
int f[10004] = {0};
 
 
void init(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
}
 
void process(){
	f[0] = 1;
	
	for(int i=1;i<=n;i++){
		for(int t = k ; t >= a[i] ; t--){
			if (f[t-a[i]] == 1) f[t] = 1;
		}		
	}
	
	if (f[k] == 1){
		cout << "YES\n";
	}else cout << "NO\n";
	
}
 
void clear_all(){
	for(int i=0;i<10004;i++) f[i] = 0;
}
 
int main(){
 
//	faster();
	int T;
	cin >> T;
	while(T--){
		clear_all();
		init();
		process();
	}
	return 0;
}
   
