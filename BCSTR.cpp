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
int DP[1001][1001] = {0};
 
void init(){
	cin >> a >> b;
}
 
void process(){
	for(int i=0;i<a.length();i++){
		for(int j=0;j<b.length();j++){
			if(a[i] == b[j]){
				DP[i+1][j+1] = DP[i][j] + 1;
			}
			else DP[i+1][j+1] = max(DP[i+1][j] ,DP[i][j+1]);
		}
	}
	cout << DP[a.length()][b.length()];
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}
 
