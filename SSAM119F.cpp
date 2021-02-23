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
 
void init(){
	cin >> n >> m;
}
 
void process(){
	int a[n+5][m+5];
	int DP[n+5][m+5] = {0};
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			DP[i][j] = oo;
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			DP[i][j] = min ( min(DP[i-1][j-1],DP[i-1][j] ) , DP[i][j-1] );
			if (DP[i][j] == oo) DP[i][j] = a[i][j];
			else DP[i][j] += a[i][j];
		}
	}
	cout << DP[n][m] << endl;
	
//	for(int i = 0 ;i<=n;i++){
//		for(int j = 0 ; j <= n;j++){
//			cout << DP[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
}
 
int main(){
 
//	faster();
	int T;
	cin >> T;
	while(T--){
		init();
		process();
	}
	return 0;
}
   
