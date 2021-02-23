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
// Dynamic Programing
// So Catalan - wikipedia
int o;
ll a[31];
 
void Catalan(){
	a[0] = 1;
	for(int i=1;i<=30;i++){
		a[i] = 0;
		for (int j=0;j<i;j++){
			a[i] += a[j] * a[i-1-j];
		}
	}
}
 
 
int main(){
	faster();
	Catalan();
	while(1){
		cin>>o;
		if (o==0) return 0;
		cout << a[o] << endl;
	}
	
	return 0;
}
 
 
 
