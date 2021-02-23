#include <bits/stdc++.h>
 
using namespace std;
 
map <string, int> mapz;
 
main(){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		string s;
		cin >> s;
		mapz[s]++;
		if( i - mapz[s] < mapz[s]-1){
			cnt++;
		}
	}
	cout<<cnt;
}   
