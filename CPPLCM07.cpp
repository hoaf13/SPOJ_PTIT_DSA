#include<bits/stdc++.h>
 
using namespace std;
 
long long bcnn(long long d, long long c){
	long long x;
	x=__gcd(d,c);
    return (d*c)/x;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	   long long a, b, c, n;
		cin >> a >> b >> c >> n;
		long long z = bcnn(a, bcnn(b, c));
		long long t1 = pow(10, n - 1), t2 = pow(10, n);
		if (z >= t2) cout << -1 << endl;
		else
		{
			if (t1 % z == 0) cout << t1 << endl;
			else cout << (t1/z + 1) *z << endl;
		}
	}
    return 0;
} 
