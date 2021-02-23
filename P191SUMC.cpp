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
 
ll n,m;
struct Data{
	ll fi;
	ll se;
	ll indez;
};
int visited[limit] = {0};
ll val[limit] = {0};
ll res = 0;
 
Data a[limit];
 
void init(){
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i].fi >> a[i].se;
		a[i].indez = 1;
	}
}
 
bool cmp(Data a , Data b){
	if (a.fi < b.fi || (a.fi == b.fi && a.se > b.se)) return true;
	return false;
}
 
void process(){
	sort( a+1 , a+n+1 , cmp);
	
	for(int i=1;i<=n;i++){
		if (visited[a[i].fi] == 0){
			visited[a[i].fi] = 1;
			if( a[i].se > 0 ) val[a[i].indez] += a[i].se ;
			res = max (res , val[a[i].indez]);
			continue;
		}
		a[i].se += a[i-1].se;
		a[i].indez = a[i-1].indez + 1;
		if (a[i].se > 0) val[a[i].indez] += a[i].se;
		res = max ( res , val[a[i].indez]);
	}
	cout << res;
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}
 
