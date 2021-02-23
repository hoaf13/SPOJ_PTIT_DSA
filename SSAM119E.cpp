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
const int MOD = 1e9+7;
 
ll DP[105];
ll a[105];
int T;
int n;
 
void preprocess(){
	for(int i=1;i<=9;i++) a[i] = 1;
	DP[1] = 10;
	for(int i=2;i<=100;i++){
		for(int j=1;j<=9;j++){
			ll sumz = 0;
			for(int k=j;k<=9;k++){
				sumz = (sumz + a[k]) % MOD;
			}
			a[j] = sumz;
			DP[i] = (DP[i] + sumz) % MOD;
		}
		DP[i] = (DP[i-1] + DP[i])%MOD;
	}	
}
 
void init(){
	cin >> n;
 
}
 
void process(){
	cout << DP[n] << endl;
}
 
int main(){
 
	faster();
	preprocess();
	cin >> T;
	while(T--){
		init();
		process();
	}
	return 0;
}
   
