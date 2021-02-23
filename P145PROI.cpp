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
const int lim = 1e7+7;
 
string s;
long hoa, thuong, so;
long long res = 0;
 
long ok(){
	if (hoa * thuong * so == 0) return 0;
	if (hoa + thuong + so >= 6) return 1;
	return 0;
}
 
main(){
	faster();
	cin >> s;
	long n = s.length();
	s = "@" + s;
	long l = 1, r = 0;
	hoa = 0;
	thuong = 0;
	so = 0;
	while (r <= n){
		if (!ok()){
			r++;
			if (r > n) break;
			if (('0' <= s[r]) && (s[r] <= '9')) so++;
			if (('A' <= s[r]) && (s[r] <= 'Z')) hoa++;
			if (('a' <= s[r]) && (s[r] <= 'z')) thuong++;
		}
		else{
			res += (n - r + 1);
			if (r - l > 5){
				if (('0' <= s[l]) && (s[l] <= '9')) so--;
				if (('A' <= s[l]) && (s[l] <= 'Z')) hoa--;
				if (('a' <= s[l]) && (s[l] <= 'z')) thuong--;
				l++;
			}
			else
			if (r - l == 5){
				r++;
				if (r > n) break;
				if (('0' <= s[r]) && (s[r] <= '9')) so++;
				if (('A' <= s[r]) && (s[r] <= 'Z')) hoa++;
				if (('a' <= s[r]) && (s[r] <= 'z')) thuong++;
				
				if (('0' <= s[l]) && (s[l] <= '9')) so--;
				if (('A' <= s[l]) && (s[l] <= 'Z')) hoa--;
				if (('a' <= s[l]) && (s[l] <= 'z')) thuong--;
				l++;
			}
		}
	}
	cout << res;
	
return 0;
}
 
