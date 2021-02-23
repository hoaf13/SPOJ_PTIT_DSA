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
char c[6][6];
int dd[6][6] = {0};
string s = "";
int res = 0;
 
void init(){
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> c[i][j];
		}
	}
}
 
int dem(){
	if (s.length()%2 != 0 ) return 0;
	int dem1 = 0;
	int dem2 = 0;
	for(int i=0;i<s.length()/2;i++){
		if (s[i] == ')') return 0;
		else dem1++;
	}
	for(int i=s.length()/2;i<s.length();i++){
		if (s[i] == '(') return 0;
		else dem2++;
	}
	return dem1 + dem2;
}
 
int xqX[] = {0,0,-1,1};
int xqY[] = {1,-1,0,0};
 
 
void Try(int row, int col){
	s += c[row][col];
	dd[row][col] = 1;
	res = max (res , dem());
	for(int i=0;i<4;i++){
		int R = row + xqY[i];
		int C = col + xqX[i];
		if ( R > 0 && R <= n && C > 0 && C <= n && dd[R][C] == 0){
			Try(R,C);
			dd[R][C] = 0;
			s.erase(s.end()-1,s.end());
		}
	}
}
 
void process(){
	Try(1,1);
	cout << res;
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}
 
