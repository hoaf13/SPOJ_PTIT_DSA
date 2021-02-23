#include<iostream>
#include<string>
#define ll long long
using namespace std;
 
long giaithua(int n){
	long s=1;
	for (int i=2;i<=n;i++){
		s*=i;
	}
	return s;
}
 
int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		long tong=s[s.length()-1]-'0';
		int k=2;
		for (int i=s.length()-2;i>=0;i--){
			tong+=(s[i]-'0')*giaithua(k);
			k++;
		}
		cout<<tong<<endl;
	}
return 0;
}
 
