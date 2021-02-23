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
const int limit = 5e5+5;
using namespace std;
 
int a[limit],s,n,b;
 
void init(){
	cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
}
 
void process(){
	sort(a,a+n);
    b = n-1, 
	s = 0;
	int i = 0;
	while(b > 0){
		if(a[i]<=b-1){
			s += a[i];
			b = b - a[i] - 1;
			i++;
		}
		else{
			s += b;
			break;
		}
	}
	cout<<s;
}
 
int main(){
	faster();
    
    init();
    process();
    
    
    return 0;
}
 
 
 
