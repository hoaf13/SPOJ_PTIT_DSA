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
 
ll a,b;
ll res = oo;
vll uoc1,uoc2;
vll uoc_c;
 
void init(){
	cin>>a>>b;
}
 
void uoc(vll &uoc_x, ll x){
	for(int i=1;i<=sqrt(x);i++){
		if (x%i == 0){
			uoc_x.pb(i);
			uoc_x.pb(x/i);
		}
	}
}
 
void an_banh(ll &tmp_x , ll &dem_x){
	while(tmp_x % 2 == 0){
		tmp_x/=2;
		dem_x++;
	}
	while(tmp_x % 3 == 0){
		tmp_x/=3;
		dem_x++;
	}
	while(tmp_x % 5 == 0){
		tmp_x/=5;
		dem_x++;
	}
}
 
void process(){
	if (a==b){
		cout<<0;
		return;
	}
	uoc(uoc1,a);
	uoc(uoc2,b);
		
	for(int i=0;i<uoc1.size();i++){
		for(int j=0;j<uoc2.size();j++){
			if (uoc1[i] == uoc2[j]){
				uoc_c.pb(uoc1[i]);
			}
		}
	}
	for (int i=0;i<uoc_c.size();i++){
		ll tmp_a = a/uoc_c[i];
		ll tmp_b = b/uoc_c[i];
		ll dem_a = 0, dem_b = 0;
		an_banh(tmp_a, dem_a);
		an_banh(tmp_b, dem_b);
		if (tmp_a == tmp_b && tmp_a == 1){
			res = min (res , dem_a+dem_b);
		}
	}
	if ( res == oo ) cout<<-1;
	else cout<<res;
}
 
 
int main(){
	faster();
	init();
	process();
	return 0;
}
 
 
 
