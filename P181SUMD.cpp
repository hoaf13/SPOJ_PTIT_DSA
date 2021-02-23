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
 
long long C ( int n, int k ){
    long long res = 1;
    for ( int i = 1; i <= k ; i ++ , n-- ){
        res = res *n/i;
    }
    return res;
}
 
main(){
	int n,m,t;
	cin >> n >> m >> t;
	int nu=1;
	int nam=t-nu;
	long long sum=0;
	while(nam>=4){
		sum=sum+C(n, nam)*C(m, nu);
		nu++;
		nam=t-nu;
	}
	cout << sum;
	return 0;
}  
