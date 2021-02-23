#include<bits/stdc++.h>
#define hoaf cout<<"\nLick mY ass oni-chann ~";
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int nmax = 1e5+5;
 
vl arr;
vl leftt (1000005, 0);	// luu vi tri
vl rightt (1000005, 0);	// luu vi tri
int n;
stack <int> SL;	
stack <int> SR;
 
int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	cin>>n;
	arr.push_back(0);
	for (int i=1; i<=n; i++){
		long tmp;
		cin>>tmp;
		arr.push_back (tmp);
	}
	arr.push_back(0);
	SL.push(0);
	for (int i=1; i<=n; i++){
		while (!SL.empty() && arr[SL.top()]>=arr[i]) SL.pop();
		if (!SL.empty()) leftt[i]=SL.top()+1;
		SL.push(i);
	}
	SR.push(n+1);
	for (int i=n; i>=1; i--){
		while (!SR.empty() && arr[SR.top()]>=arr[i]) SR.pop();
		if (!SR.empty()) rightt[i]=SR.top();
		SR.push(i);
	}
//	for (int i=1;i<=n;i++) cout<<left[i]<<" ";
//	cout<<endl;
//	for (int i=1;i<=n;i++) cout<<right[i]<<" ";
//	cout<<endl;
	long Ans=0;
	for (int i=1; i<=n; i++){
		Ans = max (Ans , (rightt[i]-leftt[i])*arr[i]);
	}
	cout<<Ans;
	return 0;
} 
 
