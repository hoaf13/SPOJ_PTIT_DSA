#include<iostream>
using namespace std;
int main(){
	int T,k=0;
	cin>>T;
	while (k<T){
		k++;
		string str;
		cin>>str;
		bool flag=true;
		for (int i=0;i< str.length();i++){
			if (i%2==0){
				if (str[i]%2==0){
					flag=false;
					break;
				}
			}else if (str[i]%2!=0){
					flag=false;
					break;
				  }
		}
		if (flag==true) cout<<"YES\n";
		else cout<<"NO\n";
	}
return 0;
}
 
