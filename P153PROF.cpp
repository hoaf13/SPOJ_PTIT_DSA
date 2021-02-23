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
const int limit = 2e5+5;
 
int n;
int a[limit];
int b[limit];
 
void init(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
}
 
void process(){
	sort(a,a+n);
	sort(b,b+n);
	int dem=0;
	int i=0;
	int j=0;
	while(i!=n && j!=n){
		if (a[i]<b[j]) {
			dem++;
			i++;
			j++;	
		}
		else{
			j++;
		}
	}	
	cout<<dem;
 
}
 
 
int main(){
	faster();
	
	
	init();
	process();
 
 
	return 0;
}
 
 
 
