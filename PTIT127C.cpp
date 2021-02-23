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
const int limit = 1e4+4;
 
void qSort(int a[], int b[] ,int l, int r){
	int key=b[(l+r)/2],i=l, j=r;
	while(i<=j){
		while(b[i]<key) i++;
		while(b[j]>key) j--;
		if(i<=j){
			swap(b[i],b[j]);
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(i<r) qSort(a,b,i,r);
	if(l<j) qSort(a,b,l,j);
}
 
 
int main(){
	int n;
	cin>>n;
	int a[n],b[n],i,j;
	for (i=0;i<n;i++)
		cin>>a[i]>>b[i];
	qSort(a,b,0,n-1);
	int counter=1;
	i=0;
	for (j=1;j<n;j++){
		if(a[j]>=b[i]){
			counter++;
			i=j;
		}
	}
	cout<<counter;
	return 0;
}
 
 
