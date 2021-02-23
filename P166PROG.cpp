#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	int dem=0;
	for (int i=0;i<s1.length();i++){
		if (abs((s1[i]-'0')-(s2[i]-'0'))<(10+min((s1[i]-'0'),(s2[i]-'0'))-max(abs(s1[i]-'0'),abs(s2[i]-'0')))){
//			cout<<abs((s1[i]-'0')-(s2[i]-'0'))<<" ";
			dem+=abs((s1[i]-'0')-(s2[i]-'0'));	
		} 
		else{
//			cout<<(10+min((s1[i]-'0'),(s2[i]-'0'))-max((s1[i]-'0'),(s2[i]-'0')))<<" ";
			dem+=(10+min((s1[i]-'0'),(s2[i]-'0'))-max((s1[i]-'0'),(s2[i]-'0')));
		} 
	}
	cout<<dem;
return 0;
}
 
