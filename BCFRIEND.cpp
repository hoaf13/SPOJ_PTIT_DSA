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
 
map<ll, ll> mymap;
int n;
ll b;
ll res = 0;
 
void init(){
	cin >> n >> b;
  	for (int i=0;i<n;i++){
  		ll tmp;
  		cin >> tmp;
  		mymap[tmp]++;
	}
}
 
ll C ( ll k, ll n ){
    ll ans = 1;
    for ( int i = 1; i <= k ; i ++ , n-- ){
        ans = ans *n/i;
    }
    return ans;
}
 
void process(){
	map<ll ,ll >::iterator iter = mymap.begin();
	while(iter != mymap.end()){	
		int t1 = iter -> fi;
		if (t1 > b/2 ) break;
		if (t1*2 == b){
			res += C(2,mymap[t1]);
		}
		else res += mymap[b-t1]*mymap[t1];
		iter++;
	}
	cout << res;
}
 
int main(){
	faster();	
  	
  	init();
  	process();
	
	return 0;
}
 
 
 
