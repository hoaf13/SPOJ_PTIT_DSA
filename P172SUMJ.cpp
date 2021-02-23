#include<bits/stdc++.h>
 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define faster ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
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
 
int n,m;
 
 
void init(){
	cin>>n>>m;
}
 
void process(){
	int begin;
	if (n%2 == 0) begin = n/2;
	else begin = n/2+1;
	for(int i=begin;i<=n;i++){
		if (i%m==0){
			cout<<i;
			return;
		}
	}
	cout<<-1;
}
 
 
int main(){
	faster;
	init();
	process();
 
 
	return 0;
}
 
 
 
