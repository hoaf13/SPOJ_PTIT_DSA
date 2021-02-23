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
 
const char dotz = '.';
 
int manacher(string s) {
	int n = s.size() * 2 - 1;
	vector <int> f(n, 0);
	string a(n, dotz);
	for (int i = 0; i < n; i += 2) a[i] = s[i / 2];
 
	int l = 0, r = -1, center, res = 0;
	for (int i = 0, j = 0; i < n; i++) {
		if (i > r){
			j = 1;
		}
		else j = min(f[l + r - i], r - i) + 1;
		while (i - j >= 0 && i + j < n && a[i - j] == a[i + j]) j++;
		f[i] = --j;
		if (i + j > r) {
			r = i + j;
			l = i - j;
		}
 
		int len = (f[i] + i % 2) / 2 * 2 + 1 - i % 2;
		if (len > res) {
			res = len;
			center = i;
		}
	}
	return res;
}
 
string s;
 
void init(){
	cin >> s;
	
}
 
void process(){
 
	cout << manacher(s) << endl;
}
 
 
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--){
 
	init();
	process();
}
	return 0;
}
 
  
