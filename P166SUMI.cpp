#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int a[n+1];
	int d[2]={0};
	for (int i=1;i<=n;i++){
		cin>>a[i];
		d[a[i]]++;
	}
	if(d[0]==1) cout<<"YES";
	else cout<<"NO";
	
return 0;
}
 
