#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	int T,k=0;
	cin>>T;
	long long S=0;
	while(k<T){
		k++;
		long  x1,y1,z1,x2,y2,z2;
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		long long V=abs(x1-x2)*abs(y1-y2)*abs(z1-z2);
		S=max(V,S);
	}
	cout<<S;
return 0;
}
 
