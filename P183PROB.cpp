#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<long> a;
	vector<long> b; 
	vector<long> c;
	int n,f;	
	cin>>n>>f;
	long sp=0;
	for (int i=0;i<n;i++){
		int p,q;
		cin>>p>>q;
		a.push_back(p);
		b.push_back(q);
		sp+= min(p,q);
		c.push_back(min(2*p,q)-min(p,q));
	}	
	sort(c.begin(),c.end(),greater<long long>());	// sort upper
 
	for(int i=0;i<f;i++){
		sp+=c[i];
	}
	cout<<sp;
return 0;
}
 
