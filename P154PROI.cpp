#include<iostream>
#include<math.h>
#include<string>
#include<vector>
typedef long long ll;
using namespace std;
 
void daoxau(string s, string &r){
	for (int i=s.length()-1;i>=0;i--){
		r.push_back(s[i]);
	}
}
 
int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		string r;
		daoxau(s,r);
		bool flag=true;
		for (int i=1;i<s.length();i++){
			if (abs(s[i]-s[i-1])!=abs(r[i]-r[i-1])){
				flag=false;
				break;
			}
		}
		if (flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
 
return 0;
}
 
