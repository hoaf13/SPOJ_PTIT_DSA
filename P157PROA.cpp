#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	int T;
	cin>>T;
	while(T--){
		int d[1001]={0};
		int n;
		cin>>n;
		vector<int> a;
		for (int i=0;i<n;i++){
			int m;
			cin>>m;
			d[m]++;
		}
		int MAX=0;
		for (int i=0;i<=1000;i++){
			MAX=max(MAX,d[i]);
		}
		for(int i=0;i<=1000;i++){
			if (d[i]==MAX) a.push_back(i);
		}
		sort(a.begin(),a.end());
		cout<<a[0]<<endl;
	}
 
return 0;
}
 
