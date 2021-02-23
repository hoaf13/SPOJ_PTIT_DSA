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
 
int T, t, n, st[2000];
string s;
 
void init(){
	cin >> s;
}
 
int tinh(char c){
	return min(c - 'A','Z' - c + 1);
}
 
int ketQua(string s){
	n = s.length();
	s = "s" + s;
	int res = 0;
	for (int i = 1; i <= n; i++) res += tinh(s[i]);
	t = 0;
	for (int i = 1; i <= n; i++)
	  	if (s[i] != 'A'){
	  		t++;
	  		st[t] = i;
	  }
	if (t == 0) return 0;
	if (t == 1) return res + min(st[t] - 1, n - st[t] + 1);
	int d = min(st[t] - 1, n - st[1] + 1);
	for (int i = 1; i <= t - 1; i++) d = min(d, 2 * (st[i] - 1) + n - st[i + 1] + 1);
	for (int i = 2; i <= t; i++) d = min(d, 2 * (n - st[i] + 1) + st[i - 1] - 1);
	return res + d;
}
 
void process(){
	cout << ketQua(s) << endl;
}
 
int main(){
	faster();
	
	cin >> T;
	while (T--){
 
		init();
		process();
		
	}
	return 0;
}
 
 
