#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int n;
	string team;
	string team1;
	vector<string> a;
	cin>>n;
	cin>>team;
	for (int i=0;i<n-1;i++){
		string c;
		cin>>c;
		a.push_back(c);
	}
	int dem=1;
	for (int i=0;i<a.size();i++){
		if(a[i]==team) dem++;
	}
	for (int i=0;i<a.size()-1;i++){
		if(a[i]!=a[i+1] && a[i+1]==team){
			team1=a[i];
			break;	
		} 
	}
	if (dem>n/2) cout<<team;
	else cout<<team1;
return 0;
}
 
