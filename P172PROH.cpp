#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
bool check2(char a, char b){
	if (a=='c' && b=='=') return true;
	if (a=='c' && b=='-') return true;
	if (a=='d' && b=='-') return true;
	if (a=='l' && b=='j') return true;
	if (a=='n' && b=='j') return true;
	if (a=='s' && b=='=') return true;
	if (a=='z' && b=='=') return true;
	return false;
}
 
bool check3(char a , char b , char c){
	if (a=='d' && b=='z' && c=='=') return true;
	return false;
}
 
int main(){
	string s;
	cin>>s;
	s+="   ";
	int dem=0;
	for(int i=0;i<s.length();){
		if (check3(s[i],s[i+1],s[i+2])){
			dem++;
			i+=3;
//			cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
		}else
		if (check2(s[i],s[i+1])){
			dem++;
			i+=2;
//			cout<<s[i]<<s[i+1]<<endl;
		}
		else{
			dem++;
			i++;
//			cout<<s[i]<<endl;
		}
	}
	cout<<dem-3;
return 0;
}
 
