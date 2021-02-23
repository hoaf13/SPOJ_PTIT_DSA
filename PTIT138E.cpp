#include<iostream>
#include<string>
#define ll long long
using namespace std;
 
int main(){
	int T;
	cin>>T;
	while(T--){
		
		string s;
		cin>>s;
		int dem=0;
		for (int i=s.size()-1;i>=1;i--){
			int k= (s[i]-'0')+dem;
			s[i]=k+'0';
			if(s[i]>='5'){
				s[i]='0';
				dem=1;
			}else{
				s[i]='0';
				dem=0;
			}
		}
		if (dem==1){
			int k=(s[0]-'0')+1;
			if (k<10) s[0]=k+'0';
			else {
				s[0]='0';
				s.insert(s.begin(),'1');
			}
			
		} 
		cout<<s<<endl;
	}
return 0;
}
 
				 
