#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
 
int main(){
	int T;
	cin>>T;
	while(T--){
		string a,b,c;
		cin>>a>>b>>c;
		string s=a+b+c;
		sort(s.begin(),s.end(),greater<char>());
		cout<<s<<endl;
	}
 
return 0;
}
 
