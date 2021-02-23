#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
long long uutien(char c){
	if(c=='(') return 0;
	if(c=='+'||c=='-') return 1;
	if(c=='*'||c=='/'||c=='%') return 2;
	if(c=='^') return 3;
}
 
string hauto(string res,string s){
	stack<char>st;
	string s1;
	int i = 0;
	while(i<s.length()){
		char c = s[i];
		if(c-'0'>=0&&c-'0'<=9||isalpha(c)) res+=c;
		else{
			res+=" ";
			if(c=='(') st.push(c);
			else{
				if(st.empty()==1) st.push(c);
				else{
					if(c==')'){
						while(st.top()!='('){
							res+=st.top();
							st.pop();
						}
						st.pop();
					}
					else{
						while(!st.empty()&&uutien(c)<=uutien(st.top())){
							res+=st.top();
							st.pop();
						}
						st.push(c);
					}
				}
			}
		}
		i++;
	}
	while(!st.empty()){
		res+=st.top();
		st.pop();
	}
	return res;
}
 
long long checkop(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/') return 1;
	return 0;
}
void solve(string s){
	vector<ll> st;
	for(ll i = 0;i<s.size();){
		ll sum = 0;
		bool check = true;
		while(s[i]-'0'>=0&&s[i]-'0'<=9){
			check = false;
			sum = sum*10+ (s[i]-'0');
			i++;
		}
		if(check == false)st.push_back(sum);	
		if(s[i]==' ') i++;
		if(checkop(s[i])==1){
			long long x = st.back();
			st.pop_back();
			long long y = st.back();
			st.pop_back();
			if(s[i]=='+') st.push_back(x+y);
			if(s[i]=='-') st.push_back(y-x);
			if(s[i]=='*') st.push_back(y*x);
			if(s[i]=='/') st.push_back(y/x);
			i++;
		}
 
	}
	cout<<st.back()<<endl;
}
int main(){
	ll test;
	cin>>test;
	while(test--){
		string res="";
		string s;
		cin>>s;
		string x= hauto(res,s);
		solve(x);
	}
}  
