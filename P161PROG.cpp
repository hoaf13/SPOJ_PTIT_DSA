#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
bool chinhphuong (long long x){
	long long so=sqrt(x);
	if (so*so==x) return 1;
	else return 0;
}
 
bool kt (long long x){
	for (long long i=1; i<=sqrt(x); i++){
		if (x%i==0){
			if (chinhphuong(i)==1 && sqrt(i)>1) return false;
			if (chinhphuong(x/i)==1 && sqrt(x/i)>1) return false;
		}
	}
	return 1;
}
 
int main (){
	long long n;
	cin>>n;
	vector <long long> ds;
	for (long long i=1; i<=sqrt (n); i++){
		if (n%i==0){
			if (i!=sqrt (n)){
				ds.push_back(i);
				ds.push_back(n/i);
			}
			else{
				if (chinhphuong(n)==1){
					ds.push_back(i);
				}
				else{
					ds.push_back(i);
					ds.push_back(n/i);
				}
			}
		}
	}
	sort (ds.begin(), ds.end(),greater<long long>());
	for (long long i=0; i<ds.size(); i++){
		if (kt(ds[i])==1){
			cout<<ds[i];
			break;
		}
	}
	return 0;
} 
