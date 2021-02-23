#include<bits/stdc++.h>
#define hoaf cout<<"\nhoaf13. I'm here ~";
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
 
const double pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
 
struct data{
	ll value;
	ll count;
}typedef prime;
 
ll snt(ll n){
	ll i;
    for(i=2;i<=sqrt(n);i++) {
            if(n%i==0) return 0;
        }
 
return 1;
}	
 
void xuly(ll n,vector<prime> &ds ){
	 for(ll i=2; i<=sqrt(n); i++){
        if(n%i==0){
            if(snt(i)==1){	
                ll dem=0;
                while(n%i==0){
                    n=n/i;
                    dem++;
                }
                prime tmp;
            	tmp.value = i;
            	tmp.count = dem;
            	ds.push_back(tmp); 
            }
        }
    } 
    if (n!=1 && snt (n)==1){
    	prime tmp;
    	tmp.value = n;
    	tmp.count = 1;
    	ds.push_back(tmp);
	} 
}	
 
ll sum(ll n , ll m ){
	if (n==0) return 0;
	ull res = 0;
	ull tmp = n;
	while(tmp!=0)
	{
			res=res+(tmp/m);
			tmp=tmp/m;
	}
	return res;
}
 
ll trailing_zero(ll n, ll b ,vector<prime> &ds){
	vll ans;
	ll res = inf;
	for (ll i=0;i<ds.size();i++){
		ll kq = (ll)sum(n,ds[i].value)/ds[i].count;
	//	cout<<(ll)sum(n,ds[i].value)<<" "<<ds[i].count<<endl;
		ans.push_back(kq);	
	}
	for(ll i=0;i<ans.size();i++) res = min(res,ans[i]);
	return res;
}
 
 
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		ll n,b;
		vector<prime> ds;
		cin>>n>>b;
		xuly(b,ds);
		vll res;
		cout<<trailing_zero(n,b,ds)<<endl;
	}
return 0;
} 
