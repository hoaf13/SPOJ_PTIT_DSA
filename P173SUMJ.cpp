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
 
 
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int count=0;
		int d[110]={0};
		for (int i=0;i<n;i++){
			int k;
			cin>>k;
			d[k]++;
		}
		for (int i=1;i<=100;i++){
			if (d[i]>=2) count+=d[i]/2;
		}
		if (count%2==0) count/=2;
		else count=(count-1)/2;
		cout<<count<<endl;
	}
 
return 0;
}
 
