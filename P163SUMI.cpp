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
 
string numToString(int n){
	string tmp="";
	while(n>0){
		tmp+=(n%10+'0');
		n=n/10;
	}
	string s="";
	for(int i=tmp.length()-1;i>=0;i--){
		s+=tmp[i];
	}
	return s;
}
 
int main(){
	int n;
	cin>>n;
	string s="";
	for (int i=1;i<=n;i++){
		s+=numToString(i);
	}	
	cout<<s[n-1];
return 0;
}
 
