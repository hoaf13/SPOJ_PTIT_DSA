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
 
int C[50],b[50],n,k;
 
int kiemtra(int t,int a[],int k){
	for(int i=1;i<=k;i++)
		if(a[i]==t) return 0;
	return 1;	
}
 
int dem(int a[],int b[],int k){
	int d=0;
	for(int i=1;i<=k;i++){
		if(kiemtra(b[i],a,k)) d++; 
	}
	return d;
}
 
void Sinh(int C[],int b[],int k){
	int i=k;
	while(C[i]==n-k+i) i--;
	if(i==0) cout << k << endl;
	else {
		C[i]++;
		for(int j=i+1;j<=k;j++)
			C[j]=C[j-1]+1;
		cout << dem(C,b,k) << endl;
	}
}
 
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=k;i++) {
			cin >> C[i];
			b[i]=C[i];
		}
			Sinh(C,b,k);
	}
}  
