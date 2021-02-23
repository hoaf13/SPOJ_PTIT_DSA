#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	unsigned long long n;
	cin>>n;
	if (n%2==0) cout<<(n/2);
	else cout<<"-"<<n/2+1;
return 0;
}
 
