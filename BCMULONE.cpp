#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int T,m=0;
	cin>>T;
	while(m<T){
		m++;
		long n;
		cin>>n;
		for (long i=1;i<=(n-1)/9;i++) cout<<"123456790";
		int	k=(n-1)%9;
		for (long i=1;i<=k;i++) cout<<char(48+i);
		for (long i=k+1;i>=2;i--) cout<<char(48+i);
		for (long i=1;i<=(n-1)/9;i++) cout<<"098765432";
		cout<<"1"<<endl;
	}
return 0;
}
 
