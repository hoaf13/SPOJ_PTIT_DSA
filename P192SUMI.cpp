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
 
struct data{
	ll st,end;
};
 
ll res = 0;
ll maz= -1e9;
ll pp[1048578];
data arr[1048578];
ll dem = 0;
 
bool ktup(ll a[],ll l,ll r){
	ll sum = 0;
	for(ll i = l;i<=r-1;i++){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}
void dequy(ll a[],ll l,ll r){
	if(ktup(a,l,r)==1){
		res = max(res,r-l+1);
		dem++;
		arr[dem].st = l;
		arr[dem].end = r;
	} 
	else{
		dequy(a,l,(l+r)/2);
		dequy(a,((l+r)/2)+1,r);
	}
}
int main(){
	faster();
	ll n;
	cin>>n;
	ll a[n+5];
	for(ll i = 1;i<=n;i++){
		cin>>a[i];	
		pp[i] = a[i]+pp[i-1];
	} 
	dequy(a,1,n);
	for(ll i = dem;i>=1;i--){
		if(arr[i].end-arr[i].st+1==res) maz = max(maz,pp[arr[i].end]-pp[arr[i].st-1]);
	}
	cout<<res<<" "<<maz;
 
}   
