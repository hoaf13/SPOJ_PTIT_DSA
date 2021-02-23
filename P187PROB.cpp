#include<bits/stdc++.h>
 
#define lmao cout<<"\nLick My Ass onii-chann ~";
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define mp make_pair
#define fi first
#define se second
#define pb push_back
 
/******************************************************************************
 *                                                                            *
 *                            Lick My Ass Onii~chan                           *
 *                                                                            *
 *                                                                            *
 *****************************************************************************/
 
using namespace std;
 
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pii;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
const int limit = 2e6+5;
 
ll a[limit]={0};
ll check[limit] = {0};
ll res = 0;
 
void init(){
	for(int i=2;i<=limit/2;i++){
		if (check[i]==0){
			for(int j=i*2;j<=limit;j+=i){
				check[j]=1;
				int tmp = j;
				while(tmp%i==0){
					a[j]+=i;
					tmp/=i;
				} 	
			}
		}
	}
}
 
 
void process(){
 
	int T;
	cin>>T;
	while(T--){
		ll tmp;
		cin>>tmp;
		if (tmp == 1) continue;
		if (a[tmp] == 0){
			res+=tmp;	
		}
		else{
			res += a[tmp];
		}
	}
	cout<<res;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	init();
	process();
	return 0;
}
  
