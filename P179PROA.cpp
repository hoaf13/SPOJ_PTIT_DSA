#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
struct pokemon{
	string name;
	int k,m;
	int dem;
};
 
int main(){
	int n;
	cin>>n;
	int t=n;
	cin.ignore();
	vector<pokemon> ds;
	while (t--){
		pokemon tmp;
		cin>>tmp.name;
		cin>>tmp.k>>tmp.m;
		cin.ignore();
		ds.push_back(tmp);
	}
	int count=0;
	for (int i=0;i<n;i++){
		while(1){
			if(ds[i].k>ds[i].m) break;
			else{
				ds[i].m=ds[i].m-ds[i].k+2;
				ds[i].dem++;
				count++;
			}
		}
	}
	string max;
	int d=-1;
	for(int i=0;i<ds.size();i++){
		if(ds[i].dem>d){
			d=ds[i].dem;
			max=ds[i].name;
		}
	}
	cout<<count<<endl<<max;
return 0;
}
 
