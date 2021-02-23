#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string a,b,c;
	cin>>a>>b>>c;
	string alpha="0123456789";
	int vta=-1,vtb=-1,vtc=-1;
	int a1,b1,c1;
	for(int i=0;i< a.length();i++) if(a[i]=='?') vta=i;
	for(int i=0;i< b.length();i++) if(b[i]=='?') vtb=i;
	for(int i=0;i< c.length();i++) if(c[i]=='?') vtc=i;
	if (vta!= -1){
		for (int j=0;j<10;j++){
			a[vta]=alpha[j];
			stringstream stranum(a);
			stringstream strbnum(b);
			stringstream strcnum(c);
			stranum >> a1;
			strbnum >> b1;
			strcnum >> c1;	
			if (a1+b1==c1){
				cout<<alpha[j];
				break;
			}
		} 		
	}
	if (vtb!= -1){
		for (int j=0;j<10;j++){
			b[vtb]=alpha[j];
			stringstream stranum(a);
			stringstream strbnum(b);
			stringstream strcnum(c);
			stranum >> a1;
			strbnum >> b1;
			strcnum >> c1;	
			if (a1+b1==c1){
				cout<<alpha[j];
				break;
			}
		} 		
	}
	if (vtc!= -1){
		for (int j=0;j<10;j++){
			c[vtc]=alpha[j];
			stringstream stranum(a);
			stringstream strbnum(b);
			stringstream strcnum(c);
			stranum >> a1;
			strbnum >> b1;
			strcnum >> c1;	
			if (a1+b1==c1){
				cout<<alpha[j];
				break;
			}
		} 		
	}
return 0;
}
 
