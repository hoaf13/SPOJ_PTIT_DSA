#include <iostream>
#define ll long long
using namespace std;
ll f1, f2, n, res;
 
ll tinh(ll n)
{
	if (n == 1) return f1;
	if (n == 2) return f2;
	if (n == 3) return (f2 - f1);
	if (n == 4) return (-f1);
	if (n == 5) return (-f2);
	return (f1 - f2);
}
 
main()
{
	cin >> f1 >> f2 >> n;
	n = n % 6;
	res = tinh(n);
	cout << res;
} 
