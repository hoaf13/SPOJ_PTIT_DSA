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
	while (T--){
		ull a[3];
		for (int i=0;i<3;i++){
			cin>>a[i];
		}
		sort(a,a+3);
		cout<<a[2]-a[0]<<endl;
	}
 
return 0;
}
 
