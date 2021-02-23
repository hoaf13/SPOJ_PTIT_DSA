#include<bits/stdc++.h>
 
#define lmao cout<<"\nLick My Ass onii-chann ~";
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define mp make_pair
#define fi first
#define se second
#define pb push_back
 
/******************************************************************************
 *                                                                            *
 *                            Lick My Ass Onii~chan                           *
 *                                                                            *
 *                                                                            *
 *****************************************************************************/
 
using namespace std;
 
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pii;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
 
 
ll res, t, k, n;
 
void Process(ll n, ll k){
	ll f[200][200][5];
	for (int i = 0; i <= n; i++)
	    for (int j = 0; j <= k; j++)
	        for (int k = 0; k <= 1; k++) f[i][j][k] = 0;
	f[1][0][0] = 1;
	f[1][0][1] = 1;
	
	for (int i = 2; i <= n; i++)
	    for (int j = 0; j <= k; j++){
		  	f[i][j][1] = f[i - 1][j][0];
		  	if (j > 0) f[i][j][1] += f[i - 1][j - 1][1];
		  	f[i][j][0] = f[i - 1][j][1] + f[i - 1][j][0];
	  	}
	res = f[n][k][0] + f[n][k][1];
}
 
main(){
	cin >> t;
	for (int i = 1; i <= t; i++){
		int ord;
		
		cin >> ord >> n >> k;
		Process(n, k);
		cout << ord << " " << res << endl;
	}
	return 0;
}
 
