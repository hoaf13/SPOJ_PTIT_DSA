#include<iostream>
#include<string>
bool check(char s[],int n){
	for(int i=0;i<n;i++){
		if(s[i]!='4' && s[i]!='7') return false;
	}
	return true;
}
using namespace std;
int main(){
	int n;
	cin>>n;	
	cin.ignore();
	char s[n];
	gets(s);
	if (check(s,n)){
		int tong1=0;
		int tong2=0;
		for(int i=0;i<n/2;i++){
			tong1+=s[i]-'0';
			tong2+=s[n-i-1]-'0';
		}
		if (tong1==tong2) cout<<"YES";
		else cout<<"NO";
	}else cout<<"NO";
return 0;
}
 
