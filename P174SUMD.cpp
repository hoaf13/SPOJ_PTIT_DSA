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
 
int x,y;
int ngay[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int res = 0;
 
void init(){
	cin >> x >> y;
	
}
 
void process(){
	int k = ngay[x];
	while(k > 0){
		if (y != 7){
			k -= 7-y-1;
			y = 7;
		}else{
			y = 0;
			res++;
		}
	}
	cout << res;
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}
 
