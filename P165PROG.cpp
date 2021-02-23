#include<iostream>
#include<math.h>
#define short 32767
#define intt 2147483647
using namespace std;
long long stringToNum(string s){
	long long n=0;
	for (int i=0;i<s.length();i++) {
		n=n*10+(s[i]-'0');
	}
	return n;
}
int main(){
	string s;
	cin>>s;
	int t;
	t=s.length();
	if(t>19) cout<<"BigInteger";
	else {
		if(t<19)
		{
			string b=s;
		long long n;
		n=stringToNum(s);
		if(n<=127) cout<<"byte";
		else if(n<=short ) cout<<"short";
		else if(n<=intt) cout<<"int";
		else  cout<<"long";
		}
		else if(t==19){
			if(s[18]-'0'<=8) cout<<"long";
			else cout<<"BigInteger";
		}
	}
	return 0;
} 
