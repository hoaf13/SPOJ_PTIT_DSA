#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int d1=0;
	int d2=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]>=0) d1++;
		if (a[i]<0) d2++; 
	}
	if(d1==n){
		long s=0;
		for(int i=0;i<n;i++){
			s+=a[i];
		}
		cout<<s<<" "<<s;
	}else
	if(d2==n){
		sort(a,a+n);
		cout<<a[n-1]<<" "<<a[n-1];
	}else{
		long s1=0;
		for (int i=0;i<n;i++ ){
			if (a[i]>0) s1+=a[i];
		}
		long s2=0;
		long s2tmp=0;
		for (int i=0;i<n;i++){
			s2tmp+=a[i];
			if (s2tmp>=0) s2=max(s2,s2tmp);
			else {
				s2tmp=0;
			}
		}
		cout<<s2<<" "<<s1;
	}
	
return 0;
}
 
