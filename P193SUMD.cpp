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
 
string a;
string b;
int cnta = 0;
int cntb = 0;
int n;
int res = 0;
 
void init(){
	cin >> a >> b;
	n = b.length();
}
 
void process(){
	for(int i=0;i<n;i++){
		if (b[i] == '1') cntb++;
		if (a[i] == '1') cnta++;
	}	
	int k = abs(cnta - cntb);
	if (k%2 == 0) res++;
	for(int i=n;i<a.length();i++){
		if (a[i] == '1'){
			cnta++; 
		}
		if (a[i-n] == '1'){
			cnta--;
		}
		int l = abs(cnta - cntb);
		if (l%2 == 0) res++;
	}
	cout << res;
}
 
 
int main(){
 
	faster();
	
	init();
	process();
 
	return 0;
}
 
  
