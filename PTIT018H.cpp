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
 
ll  a[1005][1005];
 
int main(){
	faster(); 
	int T;
	cin>>T;
	while(T--){
		ll n;
		cin>>n;
		ll maz = -1e9;
		for(long long i = 1;i<=n;i++){
			cin>>a[1][i];
			maz = max(maz,a[1][i]);
		}
		cout<<maz<<" ";
		ll k = n-1;
		for(long long i = 2;i<=n;i++){
			maz = -1e9;
			for(long long j = 1;j<=k;j++){
				a[i][j] = min(a[i-1][j],a[i-1][j+1]);
				maz =max(maz,a[i][j]);
			}
			k--;
			cout<<maz<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
