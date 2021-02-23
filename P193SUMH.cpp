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
 
int n,m;
int res = oo;
 
void init(){
	cin >> n >> m;
 
}
 
void Try(int cnt , int n , int m){
//	cout << m << endl;
	if (n == m) {
		 res = min(res , cnt);
		 return;
	}
	if (n > m){
		Try(cnt + n - m, n , n);
	}
	else{
		if (m%2!=0 || m < n) Try(cnt+1,n,m+1);
		else Try(cnt+1,n,m/2);
	}
}
 
void process(){
	
	Try(0,n,m);
	cout << res;
}
 
 
int main(){
 
	faster();
	
	init();
	process();
 
	return 0;
}
 
  
