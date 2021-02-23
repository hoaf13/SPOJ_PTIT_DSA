#include <iostream>
using namespace std;
 
int main (){
	int n;
	while (1){
		cin>>n;
		if (n==0) break;
		string S1, S2, S;
		cin>>S1>>S2>>S;
		int dem=0;
		int kt=1;
		while (1){
			if (kt==0) break;
			dem++;
			if (dem>50){
				kt=0;
				break;
			}
			string Stg="";
			for (int i=0; i<n; i++){
				Stg=Stg+S2[i];
				Stg=Stg+S1[i];
			}
			if (Stg==S){
				kt=1;
				break;
			}
			else{
				for (int i=0; i<n; i++){
					S1[i]=Stg[i];
					S2[i]=Stg[i+n];
				}
			}
		}
		if (kt==0) cout<<"-1"<<endl;
		else cout<<dem<<endl;
	}
	return 0;
} 
