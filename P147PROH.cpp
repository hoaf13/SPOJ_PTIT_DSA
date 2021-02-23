#include<iostream>
#include<string>
using namespace std;
int main(){
	int k=0;
	while(1){
		k++;
		int i,j;
		string s1,s2;
		cin>>s1>>s2;
		if (s1=="END" && s1=="END") return 0; 
		int d[s2.length()];
		for(i=0;i<s2.length();i++){
			d[i]=0;
		}
		for(i=0;i< s1.length();i++){
			for(j=0;j<s2.length();j++){
				if (d[j]==0){
					if (s1[i]==s2[j]){
						d[j]=1;
						break;
					}
				}
			} 			
		}
		bool flag=true;
		for (i=0;i< s2.length();i++){
			if (d[i]==0){
				flag=false;
				break;
			}
		}
		if (flag==true) 
		cout<<"Case "<<k <<": same\n"; 
		else cout<<"Case "<<k<<": different\n"; 
	}
return 0;
}
 
