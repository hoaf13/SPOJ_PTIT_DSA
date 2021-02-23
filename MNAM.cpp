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
const int mod = 1e7;
 
string s="";
int n,m;
int a[101][101];
int dd[101][101] = {0};
int dem[4] = {0};
int res = 0;
 
string numToString(int n){
	string ans="";
	stringstream ss;
	ss << n;
	ss >> ans;
	return ans;
}
 
void init(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
}
 
int xqX[] = {0,1};
int xqY[] = {1,0};
 
void DFS(int r , int c){
	if ( r == n && c == m ){
		int dif = 0;
		for(int i=1;i<=3;i++){
			if (dem[i] != 0 ) dif++;
		}
		if (dif > 1) res++;
	}
	for(int i=0;i<2;i++){
		int R = r + xqY[i];
		int C = c + xqX[i];
		if (R > 0 && R <= n && C > 0 && C <= m ){
			if (a[R][C] == -1) return;
			dem[a[R][C]]++;
			DFS(R,C);
			dem[a[R][C]]--;
		}	 
	}	
}
 
 
void process(){
	DFS(1,1);
	cout<<res%mod;
}
 
int main(){
	faster();
	
	init();
	process();
 
 
	return 0;
}
 
 
 
