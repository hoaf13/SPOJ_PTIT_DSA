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
 
bool check(int num[]){
	for (int i=0;i<10;i++){
		if (num[i]==0) return false;
	}
	return true;
}
 
int main(){
	ll n;
	while(cin>>n){
		int num[10]={0};
		ll s=n;
		int k=0;
		while(check(num)==false){
			ll m=s;
			while(m>0){
				num[m%10]++;
				m=m/10;
			}
			k++;
			s=k*n;	
 
		}
		cout<<k-1<<endl;
	}
return 0;
}
 
