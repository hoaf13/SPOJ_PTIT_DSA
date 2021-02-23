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
 
 
string ds[10004];
int n;
 
void init(){
 
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
}
 
void process(){
	bool FLAG = true;
	sort(ds,ds+n);
	
 
	
	for(int i=0;i<n-1;i++){
		bool flag = false;
		for(int j=0;j<ds[i].length();j++){
			if (ds[i][j] != ds[i+1][j]){
				flag = true;	// nhat quan
				break;
			}
		}
		if (flag == false){
			FLAG = false;
			break;
		}
	}
	if (FLAG == false){
		cout << "NO" << endl;
	}else cout << "YES" << endl;
 
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
 
