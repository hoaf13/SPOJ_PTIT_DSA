#include <iostream>
#include <math.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
int ktnt (long long a){
	if (a<2) return 0;
	for (long i=2; i<=sqrt(a); i++){
		if (a%i==0) return 0;
	}
	return 1;
}
 
int soGanNT (long long a){
	if (a==1) return 0;
	long long x=sqrt(a);
	if ((x*x)==a && ktnt (x)==1) return 1;
	else return 0;
}
 
int main (){
	faster();
	long n;
	cin>>n;
	long long x[100005];
	for (long i=1; i<=n; i++){
		cin>>x[i];
	}
	for (long i=1; i<=n; i++){
		if (soGanNT(x[i])==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
} 
