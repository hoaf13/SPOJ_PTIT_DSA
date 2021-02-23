#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
 
int main(){
	int T;
	cin>>T;
	cin.ignore();
	while (T--){
		char s[10];
		gets(s);
		char a[]="dung",b[]="nho hon",c[]="lon hon";
		if (strcmp(s,a)==0) cout<<"2"<<endl;
		if (strcmp(s,b)==0) cout<<"3"<<endl;
		if (strcmp(s,c)==0) cout<<"1"<<endl;
	}
 
return 0;
}
 
