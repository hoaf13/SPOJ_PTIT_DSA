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
const int limit = 103;
 
int n;
char a[limit][limit];
string DP[limit][limit];
string bin_str = "";
string res = "";
 
void clear_all(){
	bin_str = "";	
	res = "";
}
 
void init(){
	cin >> n;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j] ;
		}
	}
}
 
int change_base(string x){
	if (x == "000") return 0;
	if (x == "001") return 1;
	if (x == "010") return 2;
	if (x == "011") return 3;
	if (x == "100") return 4;
	if (x == "101") return 5;
	if (x == "110") return 6;
	if (x == "111") return 7;
}
 
void process(){
//====================== Find the the most unvalued way < BIN > ======================
 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if (i == 1 || j == 1){
				if (i==1){
					if (j != 1) DP[i][j] = DP[i][j-1] + a[i][j] ;	
					else DP[i][j] = a[i][j] ;
				}
				if (j == 1){
					if (i != 1) DP[i][j] = DP[i-1][j] + a[i][j] ;
					else DP[i][j] = a[i][j];
				}
			}
			else{
				DP[i][j] = min (DP[i-1][j] , DP[i][j-1] );
				DP[i][j] += a[i][j];
			}
		}
	}
	bin_str = DP[n][n];
 
//====================== Change Base < Bin To Hex > ======================
 
	int k = 3 - bin_str.length()%3;
	if (k != 3){
		for(int i=0;i<k;i++){
			bin_str = "0" + bin_str;
		}
	}
	for (int i=0;i<bin_str.length();i+=3){
		string tmp = "";
		tmp += bin_str[i];
		tmp += bin_str[i+1];
		tmp += bin_str[i+2]; 	
		res += (change_base(tmp) + '0');
	}
 
// xoa so 0 o dau ket qua 
 
	while(res[0] == '0'){
		res.erase(res.begin());
	}
	if (res.length() == 0){
		res = "0";
	}
	cout<<res<<endl;
 
}
 
 
 
int main(){
	faster();
 
	init();
	process();
 
	return 0;
}   
