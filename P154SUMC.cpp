#include<iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	string s,ss="";
	cin>>s;
	sort(s.begin(),s.end());
	for (int i=0;i<s.length();i++){
		if (s[i]!=s[i+1]){
			ss+=s[i];
		}
	}
	if (ss.length()%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
return 0;
} 
