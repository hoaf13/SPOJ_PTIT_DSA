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
 
int m,k;
string s;
int t = 0;
int a[1000006];
 
void init(){
	cin >> m >> k;
	cin >> s;
	for(int i=0;i<m;i++){
		a[i] = i;
	}
 
}
 
void process(){
	for(int i=0;i<s.length()-1;i++){
		if(s[i] == 'A'){
			t = (t+1)%m;		
		}
		else{
			swap(a[t],a[(t+1)%m]);
			t = (t+1)%m;
		}
	}	
	cout << a[(t+k-1)%m] << " " << a[(t+k)%m] << " " << a[(t+k+1)%m];
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}
 
