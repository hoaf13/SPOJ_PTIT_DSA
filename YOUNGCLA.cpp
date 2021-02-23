#include<iostream>
using namespace std;
int main(){
	int T,k=1;
	cin>>T;
	int a[T],b[T],c[T];
	string s;
	cin>>s;
	cin>>a[0]>>b[0]>>c[0];
	string old=s,young=s;
	int maxa=a[0],maxb=b[0],maxc=c[0];
	int mina=a[0],minb=b[0],minc=c[0];
	while(k<T){
		k++;
		string s;
		cin>>s>>a[k]>>b[k]>>c[k];
		if (c[k]<maxc || (c[k]==maxc && b[k]<maxb) || (c[k]==maxc && b[k]==maxb && a[k]<maxa)){
			old=s;
			maxa=a[k],maxb=b[k],maxc=c[k];	
		} 
		if (c[k]>minc || (c[k]==minc && b[k]>minb) || (c[k]==minc && b[k]==minb && a[k]>mina)){
			young=s;
			mina=a[k],minb=b[k],minc=c[k];	
		} 
	}
	cout<<young<<endl<<old;
return 0;
}
 
