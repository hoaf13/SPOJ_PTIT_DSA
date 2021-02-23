#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string str;
	vector<string> a;
	string x;
	while(1){
		cin>>str;
		if(str=="end") return 0;
		if(str=="init") a.clear();
		if(str=="push"){
			cin>>x;
			a.push_back(x);
		}
		if(str=="pop"){
			if(a.size()!=0){
				a.pop_back();
			}
		}
		if(str=="top"){
			if(a.size()==0) cout<<"-1"<<endl;
			else cout<<a.back()<<endl;
		}
		if(str=="size") cout<<a.size()<<endl;
		if(str=="empty") cout<<a.empty()<<endl;	
	}
return 0;
}
 
