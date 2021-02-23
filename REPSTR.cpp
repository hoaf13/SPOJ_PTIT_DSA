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
 
 
int main(){
	string a,s;
	cin>>a>>s;
	sort(s.begin(),s.end(),greater<char>());
	int i=0,j=0;
	while(i<a.length() && j<s.length()){
		if (a[i]<s[j]){
			a[i]=s[j];
			i++;
			j++;
		}
		else i++;
	}
	cout<<a;
return 0;
}
 
