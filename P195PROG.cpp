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
 
ll n;
ll d;
ll a[limit];
ll res = 0;
int dd[limit] = {0};
 
void init(){
	cin >> n;
	cin >> d;
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
}
 
int Bsearch( ll a[], int l, int r, ll key ) {
    int ans = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] <= key) { 
            ans = mid;       
            l = mid + 1;    
        } else r = r - 1;
    }
 
    return ans;
}
 
ll C ( int k, int n ){
    ll ans = 1;
    for ( int i = 1; i <= k ; i ++ , n-- ){
        ans = ans * n/i;
    }
    return ans;
}
 
void process(){
	sort(a,a+n);
 
	for(int i=0;i<n-2;i++){
		int index = Bsearch(a,i,n-1,a[i]+d);
		if (index - i + 1 >= 2 && dd[index] == 0){
			dd[index] = 1;
			int k = 3;
			int m = index - i + 1 ;
			res += C(k,m);
		}
	}		
	cout << res ;
}
 
 
int main(){
	faster();
	
	
	init();
	process();
 
 
	return 0;
}
 
 
 
