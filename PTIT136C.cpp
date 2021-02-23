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
const int limit = 1003;
 
int n;
int a[limit][limit];
vi res;
 
 
void init(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
}
 
void process(){
	if (n == 2){
		cout << a[1][2]/2 << " " << a[1][2]/2;
		return ;
	}
	
	for (int i=2;i<n;i++){
		int tmp = a[i][i+1] - a[i-1][i+1] + a[i-1][i];
		tmp /= 2;
		res.pb(tmp);
	}
	int tmp = a[n-1][n] - res[res.size()-1];
	res.pb(tmp);
	
	tmp = res[0];
	cout << a[1][2] - res[0] << " ";
	for (int i = 0 ; i < res.size();i++){
		cout<<res[i]<<" ";
	}
}
 
 
int main(){
	faster();
	
	
	init();
	process();
 
 
	return 0;
}
 
 
 
