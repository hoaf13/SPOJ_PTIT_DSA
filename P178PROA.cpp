#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	while(1){
		ll a;
		cin>>a;
		if (a==0) return 0;
		if (a<1000000) cout<<a<<endl;
		else
		if (a>=1000000 && a<=5000000) cout<<a*90/100<<endl;
		else
		cout<<a*80/100<<endl;
	}
 
return 0;
}
 
