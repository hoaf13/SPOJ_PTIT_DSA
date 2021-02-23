#include <iostream>
#include <algorithm>
 
using namespace std;
#define nmax 100000
 
 
int main(){
	long long n, k, a[nmax];
    cin >> n>> k;
    long i;
    for (i = 0; i < n; i++)
       cin >> a[i];
    sort(a + 1, a + n, greater<int>());
    long long s = 0;
    for (i = 0; i <= k; i++)
        s = s + a[i];
    for (i = k+1; i <n; i++)
        s = s - a[i];
    cout << s;
    return 0;
} 
