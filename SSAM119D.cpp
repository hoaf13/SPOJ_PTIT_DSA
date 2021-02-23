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
 
string s; 
int res = 0;
int n;
 
void init(){
	cin >> s;
	n = s.length();
}
 
void process(){
	res = 1;
	for(int i=0;i<n;i++){
		int mid = i;
		int r = 1;
		while(mid - r >=0 && mid + r < n && s[mid-r] == s[mid + r]){
			res = max(res , 2*r+1);
			r++;
		}
	}
	
	for(int i=0;i<n-1;i++){
		int mid1 = i;
		int mid2 = i+1;
		int r = 0;
		while(mid1 - r >=0 && mid2 + r < n && s[mid1 - r] == s[mid2 +r]){
			res = max(2*(r+1) , res);
			r++;
		}
	}
	cout << res << endl;	
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
   
