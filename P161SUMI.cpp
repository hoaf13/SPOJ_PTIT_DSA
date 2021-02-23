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
 
ll n,k;
string ALPHA = ALPHAA;
string s;
ll dem[26] = {0};
ll res = 0;
 
void init(){
	cin>>n>>k>>s;
}
 
void process(){
	for (int i=0;i<s.length();i++){
		for (int j=0;j<ALPHA.length();j++){
			if (s[i] == ALPHA[j]){
				dem[j]++;
				break;
			}
		}
	}	
	priority_queue<ll> heap;
	for(int i=0;i<26;i++){
		heap.push(dem[i]);
	}
	while (heap.size()){
		if ( k == 0) break;
		ll u = heap.top();
		if (u <= k){
			res += u*u;
//			cout<<res<<" ";
			k -= u;
			heap.pop();
		}else{
			res += k*k;
			k = 0;
//			cout<<res<<" ";
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
