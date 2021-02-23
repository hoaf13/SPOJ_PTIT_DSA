#include<bits/stdc++.h>
 
using namespace std;
 
int string2num(string x){
    stringstream ss;
    int ans;
    ss << x;
    ss >> ans;
    return ans;
}
 
int main(){
 	ios_base::sync_with_stdio(0);
 	cin.tie(NULL);cout.tie(NULL);
 	
    string s;
	cin >> s;
 
	long long res=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0' || s[i]=='4' || s[i]=='8') res++;
	}
 
	for(int i=0;i<s.length()-1;i++){
		int x=(s[i]-'0')*10+(s[i+1]-'0');
		if(x%4==0) res+=i+1;
	}
    
	cout<<res;
    
 
    return 0;
}  
