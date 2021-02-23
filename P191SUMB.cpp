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
 
 
ll s,b;
ll a[limit] = {0};
II p[limit];
ll accrual[limit] = {0};
 
void init(){
	cin >> s >> b;
	for(int i=0;i<s;i++){
		cin >> a[i];
	}
	for(int i=0;i<b;i++){
		cin >> p[i].fi >> p[i].se;
	}
}
 
int Bsearch(II p[], int l , int r, int x){
	int ans = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if (p[mid].fi <= x){
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return ans;
}
 
void process(){
	sort(p,p+b);
	accrual[0] = p[0].se;
	for(int i=1;i<b;i++){
		accrual[i] = accrual[i-1];
		accrual[i] += p[i].se;
	}
	for(int i=0;i<s;i++){
		int indez = Bsearch(p,0,b-1,a[i]) ;
		if (indez == -1){
			cout << 0 << " ";
		}
		else{
			cout << accrual[indez] << " ";
		}
	}
 
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}
  
