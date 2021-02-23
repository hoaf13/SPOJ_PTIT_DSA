#include<iostream>
#include<math.h>
using namespace std;
int main(){
	while(1){
		int a,b,c,d;
		int dem=0;
		cin>>a>>b>>c>>d;
		if (a==b && b==c && c==d && c==d && a==0) return 0;
		int a1,b1,c1,d1;
		while(1){
			if (a==b && b==c && c==d && c==d){
				cout<<dem<<endl;
				break;
			}
			dem++;
			a1=a,b1=b,c1=c,d1=d;
			a=abs(a1-b1);
			b=abs(b1-c1);
			c=abs(c1-d1);
			d=abs(d1-a1);
		}
	}
return 0;
}
 
