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
 
ll n,mx=0;
ll a[limit],b[limit],DP1[limit],DP2[limit];
 
void init(){
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++) cin >> b[i];
}
 
void process(){
	DP1[0]=a[0];
    DP2[0]=b[0];
    for(int i=1;i<n;i++){
        DP1[i]=max(DP1[i-1],DP2[i-1]+a[i]);
        DP2[i]=max(DP2[i-1],DP1[i-1]+b[i]);
    }
    cout<<max(DP1[n-1],DP2[n-1]);
}
 
int main(){
 
	faster();
	
	init();
	process();	
 	
    
	return 0;
}  
