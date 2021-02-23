#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int T,k=0;
	cin>>T;
	while(k<T){
		k++;
		int n;
		cin>>n;
		string str="";
		string result;
		string s="";
		for (int i=1;i<=n;i++){
			ostringstream convert;   
    		convert << i;
    		result = convert.str(); 
    		str += result;
		}
		int m=1;
		while(1){
			m++;
			int o=str.length();
			if (o==1) break;
			if (m%2==0){
				for (int i=0;i<str.length();i++){
					if (i%2==0){
						s+=str[i];
					}
				}
			}else{
				for (int i=0;i< str.length();i++){
					if (i%2!=0){
						s+=str[i];
					}
				}
			}
			str=s;
			s="";
		}
		cout<<str<<endl;	
	}
return 0;
}
 
