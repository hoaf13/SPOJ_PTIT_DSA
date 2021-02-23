#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define fi first
#define se second
#define pb push_back
 
using namespace std;
 
 
const int limit = 1e5+5;
 
int n,k;
int a[limit] = {0};
vector<int> v;
int b[limit] = {0};
int sumz = 0;
int res = 0;
 
void init(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}	
}
 
void process(){
	
	v.pb(a[0]);
	for(int i=1;i<n;i++){
		if (a[i] != a[i-1]){
			v.pb(a[i]);
			sumz++;
		} 
	}
	
	int m = v.size();
	b[v[0]]++;
	b[v[m-1]]++;
	for(int i=1;i<m-1;i++){
		if (v[i-1] == v[i+1]) b[v[i]] += 2;
		else b[v[i]]++;
	}
	
//	for(int i=1;i<=k;i++){
//		cout << sumz - b[i] << " ";
//	}
//	cout << endl;
	
	int miz = 1e9;
	for(int i=1;i<=k;i++){
		if (miz > (sumz - b[i])){
			miz = sumz - b[i];
			res = i;
		}
	}
	if ( k == 1){
		cout << 0 ;
		return;
	}
	cout << res;
}
 
 
int main(){
	
	faster();
	
	init();
	process();
	
	return 0;
}  
