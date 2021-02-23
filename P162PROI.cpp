#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main(){
	string s;
	cin>>s;
	if (s[0]!='-') cout<<s;
	else{
		if (s.length()==2){
			cout<<"0";
			return 0;
		} 
		else{
			if (s.length()==3){
				if(s[2]=='0') {
					cout<<"0";
					return 0;	
				}
				if (s[1]>s[2]) cout<<"-"<<s[2];
				else cout<<"-"<<s[1];
			}
			else{
				int d1=s.length()-1;
				int d2=s.length()-2;
				if (s[s.length()-1]>s[s.length()-2]) s.erase(s.begin()+d1);
				else s.erase(s.begin()+d2);
				cout<<s;
			}
		}
	}
	return 0;
}
 
