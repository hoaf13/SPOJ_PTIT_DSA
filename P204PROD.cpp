#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		int cnt0=0;
		int cnt1=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if (a[i] % 2==0) cnt0++;
		}
		cnt1 = n - cnt0;
		if (cnt1 == 0 || (cnt0==0 && cnt1 % 2 ==0)){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
 
	}
} 
