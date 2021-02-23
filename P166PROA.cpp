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
 
int n;
ll a[1003];
ll b[1003];
ll ans1 = 0;
ll ans2 = 0;
 
void init(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
		ans1 = max(ans1 , a[i]);
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
		ans2 = max(ans2 , b[i]);
	}
}
 
 
void process(){
	for(int i=0;i<n-1;i++){
		ll tmp = a[i];
		ll tml = b[i];
		for(int j=i+1;j<n;j++){
			tmp = tmp | a[j];
			ans1 = max(ans1 , tmp);
	
			tml = tml | b[j];
			ans2 = max(ans2 , tml);
		}
	}
	cout << ans1 + ans2;;
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}
 
