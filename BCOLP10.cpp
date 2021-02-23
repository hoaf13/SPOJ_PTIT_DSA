#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int dem=0;
	int d[s2.length()+1];
	for (int i=0;i< s2.length();i++){
		d[i]=1;
	}
	for (int i=0;i<s1.length();i++){
		for (int j=0;j<s2.length();j++){
			if (d[j]==1){
				if (s1[i]==s2[j]){
					d[j]=0;
					dem++;
				}
			}
		}
	}
	cout<< s1.length()+s2.length()-2*dem<<endl;
return 0;
}
 
