#include<iostream>
#include<sstream>
 
using namespace std;
void bien5(string &s){
	for (int i=0;i<s.length();i++){
		if (s[i]=='6') s[i]='5';
	}
}
 
void bien6(string &s){
	for (int i=0;i<s.length();i++){
		if (s[i]=='5') s[i]='6';
	}
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	bien5(s1);
	bien5(s2);
	stringstream str1num(s1); 
	stringstream str2num(s2); 
	long x1,x2;
	str1num>>x1;
	str2num>>x2;
	cout<<x1+x2<<" ";
	bien6(s1);
	bien6(s2);
	stringstream sstr1num(s1); 
	stringstream sstr2num(s2); 
	sstr1num>>x1;
	sstr2num>>x2;
	cout<<x1+x2;
return 0;
}
 
