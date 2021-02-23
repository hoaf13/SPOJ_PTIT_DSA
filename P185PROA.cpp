#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	long n;
	cin>>n;
	while (n--){
		string s;
		cin>>s;
		while(s[0]=='0') s.erase(s.begin());
		string tmp="";
		for (int i=0;i<s.length();i++){
			if (s[i]<'5') tmp+=s[i];
			else tmp+=(9-(s[i]-'0'))+'0';
		}
		if (tmp[0]=='0') tmp[0]='9';
		cout<<tmp<<endl;
	}
return 0;
}
 
