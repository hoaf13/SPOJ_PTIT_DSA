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
 
int Bsearch(vll v , int l, int r , ll x){
	while(l <= r){
		int mid =(r+l)/2;
		if (v[mid] == x) return mid;
		else if (v[mid] < x) l = mid + 1;
		else r = mid-1;
	}
	return -1;
}
 
void process(){
	int n;
	cin >> n;
	vll v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	sort(v.begin() , v.end());
 
	for(int i=0;i<n-2;i++){
		for(int j=0;j<n-1;j++){
			ll c = sqrt(v[i]*v[i] + v[j]*v[j]);
			if (c*c == v[i]*v[i] + v[j]*v[j]){
				int indez = Bsearch(v,j,n-1,c);
				if (indez != -1){
					cout << "YES\n";
					return;
				}
			}
		}
	}
	cout << "NO\n";
}
 
 
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--)
	process();
 
	return 0;
}
 
  
