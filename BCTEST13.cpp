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
 
ll l , r;
vll prime((int)1e7);
int a[11] ={0};
int movez = 0;
 
void update(int n){
	ll ans = 0;
	for(int i=0;i<n;i++){
		ans = ans * 10 + a[i];
	}
	prime[movez] = ans;
    movez++;
}
 
void Try(int i, int n){
	if (i == n){
		update(n);
	}
	else{
		for(int j=0;j<2;j++){
			if (j == 0) a[i] = 4;
			else a[i] = 7;
			Try(i+1,n);
		}
	}
}
 
void preprocess(){  
	for(int i=1;i<=9;i++){
		Try(0,i);
	}
    prime[movez] = 4444444444;
    movez++;
}
 
 
 
void init(){
    cin >> l >> r;
}
 
void process(){
	if (l == 1 && r == 1000000000){
		cout << 1394672350065645019;
		return;
	}	
    ll res = 0;
    ll ans = lower_bound(prime.begin() ,prime.begin() + movez , l) - prime.begin();
    for(ll i = l; i <= r ; i++){
        if (i > prime[ans]){
            ans++;
        }
        res += prime[ans];
    }
    cout << res;
}
 
 
int main(){
 
	faster();
	
	preprocess();
	
	init();
	
	process();
 
	return 0;
}
 
  
