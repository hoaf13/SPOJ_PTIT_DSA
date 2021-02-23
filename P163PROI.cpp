#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long d1,d2,d3;
	cin>>d1>>d2>>d3;
	long long a=min((d1+d3)*2,(d2+d3)*2);
	long long b=min(a,(d1+d2)*2);
	long long c=min(b,d1+d2+d3);
	cout<<c;
return 0;
}
 
