#include<iostream>
#include<string>
using namespace std;
int main(){
	char c=getchar();
	string str;
	string s1="qwertyuiop";
	string s2="asdfghjkl;";
	string s3="zxcvbnm,./";
	cin>>str;
	for(int i=0; i<str.length();i++){
		int vt=-1;
		int flag1=0,flag2=0,flag3=0;
		for(int j=0;j< s1.length();j++){
			if (str[i]==s1[j]){
				vt=j;
				flag1=1;
				break;
			}
			if (str[i]==s2[j]){
				vt=j;
				flag2=1;
				break;
			}
			if (str[i]==s3[j]){
				vt=j;
				flag3=1;
				break;
			}
		}
		if (flag1==1){
			if (c=='L'){
				if (vt==9) cout<<s1[0];
				else cout<<s1[vt+1];
			}	
			if (c=='R'){
				if (vt==0) cout<<s1[0];
				else cout<<s1[vt-1];
			}
		}
		if (flag2==1){
			if (c=='L'){
				if (vt==9) cout<<s2[0];
					else cout<<s2[vt+1];
				}	
				if (c=='R'){
					if (vt==0) cout<<s2[0];
					else cout<<s2[vt-1];
				}
			
		}
		if (flag3==1){
			if (c=='L'){
				if (vt==9) cout<<s3[0];
				else cout<<s3[vt+1];
			}	
			if (c=='R'){
				if (vt==0) cout<<s3[0];
				else cout<<s3[vt-1];
			}	
		}
		
	}
 
return 0;
}
 
