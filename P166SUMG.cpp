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
 
int n;
int a,b,c;
 
void init(){
	cin >> a >> b >> c;
 
}
 
void process(){
	if (a == 0 && (b == 0 || c == 0)){
		cout << "NO\n";
	}
	else{
		if (b == c){
			cout << "YES\n";
		}
		else{
			int k = abs(b-c);
			if (k%3==0) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}
 
int main(){
 
	faster();
	cin >> n;
	while(n--){
		
		init();
		process();
		
	}
	return 0;
}
 
