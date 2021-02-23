#include<iostream>
 
#define ll long long
using namespace std;
int main(){
long long n, y, k;
	cin >> y >> k >> n;
	long long res1=-1;
	for (long long i = 0; i <= n / k; i++) {
		if (k*i - y > 0) {
			res1 = k*i - y;
			break;
		}
	}
	if (res1 == -1) {
		cout << -1 << endl;
		return 0;
	}
	else for (long long i = res1; i <= n - y; i += k) cout << i << " ";
return 0;
}
 
