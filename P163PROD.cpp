#include<iostream>
#include<sstream>
#include<string>
using namespace std;
 
void xoa0(string &s){
	string ss="";
	for(int i=0;i<s.length();i++){
		if (s[i]!='0'){
			ss+=s[i];
		}
	}
	s=ss;
}
 
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	string xau1=s1,xau2=s2;
	long long s,ss1,ss2;
	stringstream str1num(s1);
	stringstream str2num(s2);
	str1num>>ss1;
	str2num>>ss2;
	s=ss1+ss2;
//========================================================
	string xau3;          
    ostringstream convert;   
    convert << s;      
    xau3 = convert.str(); 
//======================================================
	xoa0(xau1);
	xoa0(xau2);
	xoa0(xau3);
	long long sss1,sss2,sss3;
	stringstream str11num(xau1);
	stringstream str22num(xau2);
	stringstream str33num(xau3);
	str11num>>sss1;
	str22num>>sss2;
	str33num>>sss3;
	if (sss1+sss2==sss3) cout<<"YES";
	else cout<<"NO";
	return 0;
} 
