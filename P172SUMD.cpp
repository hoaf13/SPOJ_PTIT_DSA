#include<bits/stdc++.h>
 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
 
	
int main(){
	
	faster();
	long n;
	cin>>n;
	n*=2;
	cin.ignore();
	priority_queue <long,vector<long>,greater<long> > a;
	long d=0;
	long x;
	while(n--){
		string tmp; cin>>tmp;
		if(tmp=="add"){
			cin>>x;
			cin.ignore();
			a.push(x);
		}
		else if(tmp=="remove"){
			if(!a.empty()){
				if(x==a.top()){
					a.pop();
					x=a.top();
				}
				else{
					d++;
					a.pop();
					x=a.top();
				}
			}
		}
	}
	cout<<d;
	return 0;
} 
 
 
