#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main(){
	string s;
	cin>>s;
	if (s.size()<2){
		s.insert(s.begin(),'0');
	}
	int dem=1;
	for (int i=0;i<s.size();i++){
		if (s[i]=='0') dem*=2;
		if (s[i]=='1') dem*=7;
		if (s[i]=='2') dem*=2;
		if (s[i]=='3') dem*=3;
		if (s[i]=='4') dem*=3;
		if (s[i]=='5') dem*=4;
		if (s[i]=='6') dem*=2;
		if (s[i]=='7') dem*=5;
		if (s[i]=='8') dem*=1;
		if (s[i]=='9') dem*=2;
	}
	cout<<dem;
return 0;
}
 
