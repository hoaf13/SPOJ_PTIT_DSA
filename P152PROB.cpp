#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
 
int main(){
	int n, a[1000006], k, res;
	cin >> n >> k;	
	if (!n){
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + 1 + n);
	res = 1;
	for (int i = 2; i <= n; i++)
		if (a[i] - a[i - 1] > k) res++;
	cout << res;
	return 0;
} 
