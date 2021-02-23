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
const int MOD = 2147483647;
 
struct Data{
	char letter;
	ll number;
	int dd;
};
 
int n;
Data DP[1003][1003];
ll res = 0;
 
void init(){
	cin >> n;
	for (int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			DP[i][j].dd = 0;
			if (i == 0 || j == 0){
				DP[i][j].number = 0;
			}else cin >> DP[i][j].letter;
		}
	}
	DP[0][1].number = 1;
}
 
int xqC[] = {0,0,-1,1};
int xqR[] = {1,-1,0,0};
 
void DFS(int row, int col){
	DP[row][col].dd = 1;
	for(int i=0;i<4;i++){
		int R = xqR[i] + row;
		int C = xqC[i] + col;
		if (R > 0 && R <= n && C > 0 && C <= n && DP[R][C].dd == 0 && DP[R][C].letter == '.'){
			DFS(R,C);
		}
	}
}
 
void process(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if (DP[i][j].letter == '.'){
				DP[i][j].number = (DP[i-1][j].number + DP[i][j-1].number)%MOD;
			}
		}
	}
	res = DP[n][n].number;
	if (res != 0 ){
		cout << res;
		return;
	}
	DFS(1,1);
	if (DP[n][n].dd == 1){
		cout << "THE GAME IS A LIE";
	}else cout << "INCONCEIVABLE";
}
 
 
int main(){
	faster();
	
	
	init();
	process();
 
 
	return 0;
}
 
 
 
