#include<iostream>
using namespace std;
float csc(float a,float b,float c,float d){
	if(a==-1){
		a=b-(d-c); 
		if (c-b==d-c) return a;
		else return -1;
		
	}
	if(b==-1) {
		b=d-c+a; 
		if (c-b==d-c) return b;
		else return -1;
	}
	if(c==-1){
		c=d-(b-a); 
		if (c-b==d-c )return c;
		else return -1;
	}
	d=b-a+c; 
	if (c-b==d-c) return d;
	else return -1;
}
float csn(float a,float b,float c,float d){
	if(a==-1){
		a=b/(d/c); 
		if (c/b==d/c) return a;
		else return -1;
	}
	if(b==-1){
		b=d/c*a;
		if (c/b==d/c) return b;
		else return -1;
	}
	if(c==-1){
		c=d/(b/a);
		if (c/b==d/c) return c;
		else return -1;
	}
	d=b/a*c;
	if (c/b==d/c)  return d;
	else return -1;
}
 
int main(){
long a,b,c,d;
	while(1){
		cin>>a>>b>>c>>d;
		if(a==-1 && b==-1) break;
		float x=csc(a,b,c,d);
		float y=csn(a,b,c,d);
		if(x<=0 || x>10000) x=-1;
		if(y<=0 || y>10000) y=-1;
		if(x!=-1) cout<<(long)x<<endl;
		else if(y==(long)y) cout<<(long)y<<endl;
		else cout<<"-1\n";
	}
	return 0;
}
 
 
