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
const int limit = 1e6+6;
 
int m,n;
ll a[limit];
ll b[limit];
stack<int> SL1;
stack<int> SR1;
ll trai1[limit];
ll phai1[limit];
 
stack<int> SL2;
stack<int> SR2;
ll trai2[limit];
ll phai2[limit];
 
ll res1 = 0;
ll res2 = 0;
 
void init(){
	cin >> m >> n;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		b[i] = m-a[i];	
	}
	for (int i=1;i<=n;i++){
		trai1[i] = 1;
		phai1[i] = n;
		trai2[i] = 1;
		phai2[i] = n;
	}
}
 
void process(){
	SL1.push(1);
	for(int i=2;i<=n;i++){
		while(SL1.size() && a[SL1.top()] >= a[i]) SL1.pop();
		if (SL1.size()) trai1[i] = SL1.top()+1;
		SL1.push(i);
	}	
	
	SR1.push(n);
	phai1[n] = n;
	for(int i=n-1;i>=1;i--){
		while(SR1.size() && a[SR1.top()] >= a[i]) SR1.pop();
		if (SR1.size()) phai1[i] = SR1.top()-1;
		SR1.push(i);
	}
	
	SL2.push(1);
	for(int i=2;i<=n;i++){
		while(SL2.size() && b[SL2.top()] >= b[i]) SL2.pop();
		if (SL2.size()) trai2[i] = SL2.top()+1;
		SL2.push(i);
	}	
	
	SR2.push(n);
	phai2[n] = n;
	for(int i=n-1;i>=1;i--){
		while(SR2.size() && b[SR2.top()] >= b[i]) SR2.pop();
		if (SR2.size()) phai2[i] = SR2.top()-1;
		SR2.push(i);
	}
	for (int i=1;i<=n;i++){
		res1 = max (res1 , a[i]*(phai1[i]-trai1[i] + 1));
		res2 = max (res2 , b[i]*(phai2[i]-trai2[i] + 1));
	}
	cout << max (res1,res2);
}
 
 
int main(){
	faster();
	
	
	init();
	process();
 
 
	return 0;
}
 
 
 
