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
const int lim = 1e7+7;
 
int n1,n2,n3;
int a[limit], b[limit] , c[limit];
int d[lim] = {0};
 
void init(){
	
	cin>>n1>>n2>>n3;
	for(int i=0;i<n1;i++) cin>>a[i];
	for(int i=0;i<n2;i++) cin>>b[i];
	for(int i=0;i<n3;i++) cin>>c[i];
 
}
 
void process(){
	for (int i=n1-2;i>=0;i--){
		a[i] += a[i+1];
		d[a[i]]++;
	}
	for (int i=n2-2;i>=0;i--){
		b[i] += b[i+1];
		d[b[i]]++;
	}
	for (int i=n3-2;i>=0;i--){
		c[i] += c[i+1];
		d[c[i]]++;
	}
	int index = max (a[0], max (b[0],c[0])) + 1;
	
	while(index--){
		if (d[index] == 3 ){
			cout<<index;
			return;
		}
	}
	cout<<0;
}
 
 
int main(){
	faster();
	
	
	init();
	process();
 
 
	return 0;
}
 
 
 
