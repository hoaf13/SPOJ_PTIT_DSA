#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long g,y,n,m;
	cin>>g>>y;
	n=((4+g)+sqrt((4+g)*(4+g)-16*(y+g)))/4;
	m=(4+g)/2-n;
	cout<<m<<" "<<n;
	return 0;
} 
