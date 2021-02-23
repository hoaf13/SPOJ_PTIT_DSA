#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
 
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
vector <string> a;
vector <string> kq;
int cmp(string u,string v){
	while(u.length()!=102) u='0'+u;
	while(v.length()!=102) v='0'+v;
	for(int i=0;i<102;i++){
		int ui=u[i]-'0';
		int vi=v[i]-'0';
		if(ui>vi) return 0;
		if(ui<vi) return 1;
	}
	return 1;
}
int main(){
	faster();
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		a.push_back(s);
	}
	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[i].length();j++){
			if(a[i][j]>='0' && a[i][j]<='9'){
				string tam;
				while(a[i][j]>='0' && a[i][j]<='9'){
					tam+=a[i][j];
					j++;
				}
				kq.push_back(tam);
			}
		}
	}
	for(int i=0;i<kq.size();i++){
		int j=0;
		if(kq[i].length()!=1){
			while(kq[i][j]=='0' && kq[i].length()!=1) kq[i].erase(j,1);
		}
	}
	sort(kq.begin(),kq.end(),cmp);
	for(int i=0;i<kq.size();i++) cout<<kq[i]<<endl;
}  
