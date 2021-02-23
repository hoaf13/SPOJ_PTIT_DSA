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
 
int T;
int n;
ld H;
ld AC;
ld S;
 
void init(){
	cin >> n >> H;
 
}
 
void process(){
	S = 0.5*1.0*H;
	AC = sqrt(0.5*0.5 + H*H);
	for(int i=1;i<n;i++){
		ld s = ((ld)i/n)*S;	
		ld x = sqrt((2*s)/sqrt( (AC/1.0)*(AC/1.0) - 1.0/4.0 ));
		ld res = 2*s/x;
		printf("%lf ",res);
	}	
	printf("\n");
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
  
