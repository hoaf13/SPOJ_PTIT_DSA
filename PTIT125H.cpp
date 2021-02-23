#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int dem=1;
	for (int i=0;i< str.length();i++){
		if (str[i]=='S'){
			dem++;
		}else{
			dem++;
			i++;
		}
	}
	if (dem>n) cout<<n;
	else cout<<dem;
return 0;
}
 
