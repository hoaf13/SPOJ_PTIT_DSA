#include<iostream>
int ucln(int a,int b){
	if (b==0) return a;
	return ucln(b,a%b);
}
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[110];
	int b[110];
	for(int i=0;i<=n;i++) cin>>a[i];
	for(int i=0;i<=m;i++) cin>>b[i];
	if(n>m && a[0]*b[0]>0) cout<<"Infinity";
	if(n>m && a[0]*b[0]<0) cout<<"-Infinity";
	if(n<m) cout<<"0/1";
	if(n==m){
	int cs=ucln (a[0], b[0]);
		if ((b[0]<0 && cs>0) || (b[0]>0 && cs<0)){
			cs=cs*-1;
			cout<<(a[0]/cs)<<"/"<<(b[0]/cs);
		}
		else
	{
			cout<<(a[0]/cs)<<"/"<<(b[0]/cs);
		}
	}
return 0;
}
 
