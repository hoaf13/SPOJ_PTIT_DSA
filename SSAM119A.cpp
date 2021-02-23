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
 
int a[20] = {0};
int n;
string tmp;
int cnt = 0;
ll res = inf;
 
string numToString(int n){
	string ans = "";
	stringstream ss;
	ss << n;
	ss >> ans;
	return ans;
}
 
ll conv(){
	ll ans = 0;
	for(int i=1;i<=cnt;i++){
		ans = ans*10 + a[i];
	}
	return ans;
}
 
void init(){
	cin >> n;
	tmp = numToString(n);
	cnt = tmp.length();
}
 
void Try(int i){
	if (i == cnt+1){
		ll m = conv();
		if (m % n == 0) res = min(res,m);
	}
	else{
		for(int j=0;j<=1;j++){
			if (i == 1){
				j++;
			}
			if (j == 0)	a[i] = 0;
			else a[i] = 9;
			Try(i+1);
		}
	}
}
 
void process(){
	while(res == inf){
		Try(1);
		cnt++;
	}
}
 
void clear_all(){
	res = inf;
	cnt = 0;
	tmp = "";
	
}
 
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--){
		clear_all();
		init();
		process();
		cout << res << endl;
	}
	return 0;
}
   
