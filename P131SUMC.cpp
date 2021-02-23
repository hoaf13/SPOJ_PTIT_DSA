#include <iostream>
#include <cmath>
using namespace std;
double max(double a, double b){
	return (a>b)? a : b;
}
int main(){
	double a,b,c,d,x,y,z,t,smax;
	cin>>a>>b>>c>>d;
	x=abs(a/c-b/d);
	y=abs(c/d-a/b);
	z=abs(d/b-c/a);
	t=abs(b/a-d/c);
	smax=max(max(x,y), max(z,t));
	if(smax==x) { cout<<"0"; return 0;}
	if(smax==y) { cout<<"1"; return 0;}
	if(smax==z) { cout<<"2"; return 0;}
	cout<<"3";
	return 0;
} 
