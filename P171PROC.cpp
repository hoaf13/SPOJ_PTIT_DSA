#include<iostream>
#include<stdio.h>
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
 
 
double dmax(double a, double b){
	return (a>b)? a : b;
}
 
int main(){
	double n, L, rmin=0;
	vector<double> v;
	cin>>n>>L;
	for(long i=1;i<=n;i++){
		double tmp; 
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	double smax=-1.0;
	for(long i=1;i+1<v.size();i++){
		smax=dmax(smax, (v[i]-v[i-1])/2);
	}
	smax=dmax(smax, v[0]);
	smax=dmax(smax, (double) L-v[v.size()-1]);
	printf("%.10f",smax);
	return 0;
} 
