#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string c1="";
	string c2="";
	for (int i=0;i<n;i++){
		if (i%2==0){
			c1+='r';
			c2+='b';
		}else{
			c1+='b';
			c2+='r';
		}
	}
	int countRed1=0,countBlue1=0;
	int countRed2=0,countBlue2=0;
	for(int i=0;i<n;i++){
		if(c1[i]!=s[i]){
			if(c1[i]=='r') countRed1++;
			else countBlue1++;
		}
		if (c2[i]!=s[i]){
			if (c2[i]=='r') countRed2++;
			else countBlue2++;
		}
	}
	int res1,res2;
	res1=max(countRed1,countBlue1);
	res2=max(countRed2,countBlue2);
	cout<<min(res1,res2);
return 0;
}
 
