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
 
 
void init(){
	cin >> s;
 
}
 
void process(){
	if (next_permutation(s.begin(),s.end())){
		cout << s << endl;
	}else cout << "BIGGEST\n";
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
 
