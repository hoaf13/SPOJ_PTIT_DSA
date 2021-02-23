#include<iostream>
using namespace std;
int triangle(int a,int b,int c){
	if (a+b>c && a+c> b && b+c>a) return 1;
	return 0;
}
int segment(int a,int b,int c){
	if (a+b==c || a+c==b || c+b==a) return 1;
	return 0;
}
 
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(triangle(a,b,c)==1||triangle(a,b,d)==1 || triangle(b,c,d)==1 || triangle(a,c,d)==1) cout<<"TRIANGLE";
	else if(segment(a,b,c)==1||segment(a,b,d)==1 || segment(b,c,d)==1 || segment(a,c,d)==1) cout<<"SEGMENT";
	else cout<<"IMPOSSIBLE";
return 0;
}
 
