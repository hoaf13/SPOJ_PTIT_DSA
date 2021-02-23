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
 
string xuly(string s){
	int sum=0;
	for(int i=0;i<s.length();i++){
		sum+=(s[i]-'0');
	}
	string ss="";
	while (sum>0){
		ss+=(sum%10+'0');
		sum=sum/10;
	}
	return ss;
}
 
int main(){
	string s;
	cin>>s;
	if (s.length()==1) cout<<"0";
	else{
		string tmp=xuly(s);
		int dem=1;
		while(1){
			if (tmp.length()==1) break;
			dem++;
			tmp=xuly(tmp);
		}
		cout<<dem;
	}
return 0;
}
 
