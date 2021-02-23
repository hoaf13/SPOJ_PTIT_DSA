#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int dem=0;
	while(n--){
		int q,p;
		cin>>p>>q;
		if (q-p>=2) dem++;
	}
	cout<<dem;
return 0;
}
 
