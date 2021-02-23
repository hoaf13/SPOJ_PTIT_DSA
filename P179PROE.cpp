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
 
 
int main(){
	vector<double> a;
	int n;
	cin>>n;
	double tong=0;
	for (int i=0;i<n;i++){
		double m;
		cin>>m;
		tong+=m;
		a.push_back(m);
	}
	sort(a.begin(),a.end(),greater<double>());
//	for (int i=0;i<a.size();i++) cout<<a[i]<<" ";
//	cout<<endl;
	double maxx=0,max1=0,max2=0,tongtt=0;
	int tktt=0;
	for (int i=0;i<a.size();i++){
		tongtt+=a[i];
		tktt+=1;
		if (tongtt/tong-(float)tktt/(float)n > maxx){
			maxx=(tongtt/tong)-((double)tktt/(double)n);
			max1=(double)tktt/(double)n;
			max2=tongtt/tong;
		} 
	}
	printf("%.1lf %.1lf",max1*100,max2*100);
return 0;
}
 
