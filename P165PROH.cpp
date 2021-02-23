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
		float A,B,C;
		cin>>A>>B>>C;
		float a=sqrt(A*C/B);
		float b=A/a;
		float c=C/a;
		cout<<4*(a+b+c)<<endl;
	}
return 0;
}
 
