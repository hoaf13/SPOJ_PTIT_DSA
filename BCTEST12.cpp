#include<bits/stdc++.h>
 
using namespace std;
 
const string nguyenAm = "AOYEUIaoyeui";
 
int main(){
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		bool flag = true;
		for(int j=0;j<nguyenAm.length();j++){
			if(s[i] == nguyenAm[j]){
				flag = false;
				break;
			}
		}
		if (flag) cout <<"." << (char)tolower(s[i]);
	}
	return 0;
} 
