#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	long c;
	int k;
	cin>>c>>k;
	int n=pow(10,k);
	int p=c%n;
	if(p>=(n/2)) cout<<(c+(n-p)); else cout<<(c-p);
return 0;
} 
