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
const int limit = 1e5+5;
 
int n;
int a[limit];
int sumz = 0;
int T;
bool flag = false;
 
void init(){
	flag = false;
	sumz = 0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
		sumz += a[i];
		if (a[i] == 0 ) flag = true;
	}
}
 
void process(){
	sort(a,a+n,greater<int>());
		int tmp = sumz % 3;
		if (tmp == 1){
			int indez = -1;
			for(int i=n-1;i>=0;i--){
				if (a[i] >=0 && a[i] % 3 == 1){
					indez = i;
					break;
				}	
			}
			if (indez != -1){
				sumz -= a[indez];
				a[indez] = -1;	
			}
			else{
				int d[2] ;
				d[0] = -1;
				d[1] = -1;
				int movez = 0;
				for(int i=n-1;i>=0;i--){
					if (a[i] >= 0 && a[i] % 3 == 2){
						d[movez] = i;
						movez++;
					}
					if (movez == 2) break;
				}
				if (movez == 2){
					sumz -= a[d[0]];
					sumz -= a[d[1]];
					a[d[0]] = -1;
					a[d[1]] = -1;
				}
			}
		}
		if (tmp == 2){
			int indez = -1;
			for(int i=n-1;i>=0;i--){
				if (a[i] >=0 && a[i] % 3 == 2){
					indez = i;
					break;
				}
			}
//			cout << "Indez = " << indez << endl;
			if (indez != -1){
				sumz -= a[indez];
				a[indez] = -1;
			}else{
				int d[2];
				d[0] = -1;
				d[1] = -1;
				int movez = 0;
				for(int i=n-1;i>=0;i--){
					if (a[i] >=0 && a[i] % 3 == 1) d[movez]=i , movez++;
					if (movez == 2) break; 
				}
				if (movez == 2){
					sumz -= a[d[0]];
					sumz -= a[d[1]];
					a[d[0]] = -1;
					a[d[1]] = -1;
				}
			}
		}
	if (sumz == 0){
		if (flag){
			cout << 0 ;
			if (T != 0) cout << endl;
			return;
		}else{
			cout << -1 ;
			if (T != 0) cout << endl;
			return;
		}
	}	
	if (sumz % 3 == 0 ){
		for(int i=0;i<n;i++){
			if (a[i] >= 0 ) cout << a[i];
		}
		if (T != 0) cout << endl;
	}
	else{
	 	cout << -1;	
		if (T != 0) cout << endl;	
	 }
}
 
 
int main(){
 
//	faster();
 
	cin >> T;
	while(T--){
		init();
		process();
	}
	return 0;
}  
