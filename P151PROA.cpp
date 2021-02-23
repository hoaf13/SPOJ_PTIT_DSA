#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
string giaithua(char a){
	if (a=='0' || a=='1') return "1";
	if (a=='2') return "2";
	if (a=='3') return "3";
	if (a=='4') return "322";
	if (a=='5') return "5";	
	if (a=='6') return "53";
	if (a=='7') return "7";
	if (a=='8') return "7222";
	if (a=='9') return "7332";
}
	
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		string a;
		cin>>n>>a;
		string tmp="";
		for (int i=0;i<a.length();i++){
			tmp+=giaithua(a[i]);
		}
		sort(tmp.begin(),tmp.end(),greater<char>());
		while(tmp[tmp.length()-1]=='1') tmp.erase(tmp.end()-1);
		cout<<tmp<<endl;
	}
 
return 0;
}
 
