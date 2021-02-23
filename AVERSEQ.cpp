#include <iostream>
using namespace std;
long m, n, k, res, tc;
main()
{
	cin >> m >> n >> k;
	for (long i = n; i >= 0; i--)
	{
		if (m < i * 2) continue;
		tc = m + n - i * 3;
		if (tc >= k)
		{
			res = i;
			break;	
		} 
	}
	cout << res;
} 
