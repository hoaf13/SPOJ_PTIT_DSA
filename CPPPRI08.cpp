#include<bits/stdc++.h>
using namespace std;
 
void process(){
	int res = 0;
	int n, p;
	cin >> n >> p;
	for (int i = 2; i <= n; i++){
		int j = i;
		while (j % p == 0){
			j /= p;
			res++;
		}
	}
	cout << res << endl;
}
 
int main(){	
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int T;
	cin >> T;
	while (T--){
		process();
	}
	return 0;
} 
