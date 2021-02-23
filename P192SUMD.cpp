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
const int limit = 3e3+5;
 
int n;
ll a[limit];
ll b[limit];
ll res = inf;
 
void init(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
}
 
void process(){
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if (a[i] < a[j] && a[j] < a[k]){
//					cout << a[i] << " " << a[j] << " " << a[k] << endl; 
					res = min (res , b[i] + b[j] + b[k]);
				}	
			}
		}
	}
	if (res != inf) cout << res;
	else cout << -1;
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}  
