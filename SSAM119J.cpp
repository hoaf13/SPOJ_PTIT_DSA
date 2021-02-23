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
 
const int MOD = 1e9 + 7;
long long ncr[202][202];
 
void precompute(){
	int k;
	for (int i = 0; i < 202; i++){
		ncr[i][0] = ncr[i][i] = 1;
		k = i >> 1;
		for (int j = 1; j < k + 1; j++)
			ncr[i][j] = ncr[i][i - j] = (ncr[i - 1][j] + ncr[i - 1][j - 1]) % MOD;
	}
}
 
int main(){
	precompute();
	int T;
	cin >> T;
	while(T--){
		int a, b;
		cin >> a >> b;
		cout << ncr[a+b][a] << endl;
	}
	return 0;
}   
