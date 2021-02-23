#include<iostream>
#include<string>
using namespace std;
int main(){
	int T;
	cin>>T;
	for (int i=0;i<T;i++){
		string str;
		cin>>str;
		if (str=="0") cout<<"YES\n";
		else{
			if (str.length()==1) cout<<"NO\n";
			else{
				int dem=0;
				int n=str.length();
				int d1;
				d1=(str.at(n-2)-'0')*10+(str.at(n-1)-'0');
				if (d1%4==0) dem++;
				int d2=0;
				for(int j=0;j<str.length();j++){
					d2+=str[j]-'0';
				}
				if (d2%9==0) dem++;
				if (dem==2) cout<<"YES\n";
				else cout<<"NO\n";
			}
		}
	}
 
	
return 0;
}
 
