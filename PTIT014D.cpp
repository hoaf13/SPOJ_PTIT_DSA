// Happy New Year 2020
#include<iostream>
#include<sstream>
using namespace std;
string nen(string str){
	int s=0;
	for(int i=0; i<str.length() ;i++){
			s+=str[i]-'0';
	}
		str="";
		string result;
		ostringstream convert;   
    	convert << s;
    	result = convert.str(); 
    	str = result;
	return str;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int k=0,T;
	cin>>T;
	while(k<T){
		k++;
		string str;
		cin>>str;
		while(str.length()>1){
			str=nen(str);
		}
	if (str=="9") cout<<"1\n";
	else cout<<"0\n";
	}
return 0;
}
 
