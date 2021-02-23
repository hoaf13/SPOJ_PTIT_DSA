#include<iostream>
#include <math.h>
 
const int nmax = 100005;
 
using namespace std;
int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n,B;
	cin>>n>>B;
	string s;
	cin>>s;
	int a[nmax]={0};
	int k=1;
	for(int i=0;i<n;i++){
		int dem=1;
		for(int j=i+1;j<n;j++){
			if(s[j]==s[i]){
				dem++;
				i=j;
			}
			else{
				break;
			}
		}
		a[k]=dem;
		k++;
	}
	
//	for(int i=0;i<k;i++) cout<<a[i];
//	cout<<endl;
//		
	int X=k;
	a[0]=0;
	int maxx=0;
	for(int k=0;k<X;k++){
		int b=B;
		int sum=a[k];
		int step=k+1;
		while(b>0 && step<X ){
			if(a[step]<=b){
				sum+=a[step]+a[step+1];
				b-=a[step];
				step+=2;
			}
			else{
				sum+=b;
				b=0;
			}
		}
		maxx=max(maxx,sum);
	}
	cout<<maxx;
	return 0;
} 
