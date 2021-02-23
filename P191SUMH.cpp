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
char c[52][52];
 
void init(){
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> c[i][j];
		}
	}
}
 
int xqX[]={1,-1,0,0};
int xqY[]={0,0,1,-1};
 
bool checkz(int row , int col){
	for(int i=0;i<4;i++){
		int R = row + xqY[i];
		int C = col + xqX[i];
		if (R <= 0 || R  > n || C <= 0 && C > n || c[R][C] != '.') return false;
	}
	return true;
}
 
void process(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(checkz(i,j)){
				c[i][j] = '#';
				for(int k=0;k<4;k++){
					c[i+xqY[k]][j + xqX[k]] = '#';
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if (c[i][j] == '.'){
				cout << "NO";
				return;
			}
		}
	}
	cout << "YES";
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
} 
