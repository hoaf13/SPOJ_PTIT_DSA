#include<bits/stdc++.h>
 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define faster ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
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
 
 
int n,m;
vi nextt[101];
int u,v;
int dd[101] = {0};
int dem[101] = {0};
int res = 0;
bool flag = false;
 
void init(){
	cin>>n>>m>>u>>v;
	for(int i=0;i<m;i++){
		int p,q;
		cin>>p>>q;
		nextt[p].pb(q);
	}
}
 
void DFS(int s){
	dd[s] = 1;
	if (s == v){
		for (int i=1;i<=n;i++){
			if (dd[i] == 1){
				dem[i]++;			
			}
		}
	}	
	for(int i=0;i<nextt[s].size();i++){
		int o = nextt[s][i];
		if (dd[o] == 0){
			DFS(o);
			dd[o] = 0;
		}
	}
}
 
void process(){
	DFS(u);
	int res = 0;
	for(int i=1;i<=n;i++){
		if (dem[i] == dem[u] && i != u && i != v) res++;
	}
	cout<<res<<endl;
}
 
 
void clear_all(){
	for(int i=0;i<101;i++){
		nextt[i].clear();
		dd[i] = 0;
		dem[i] = 0;
	}
	flag = false;
}
 
int main(){
	faster;
	int T;
	cin>>T;
	while(T--){
		clear_all();
		init();
		process();
	}
 
	return 0;
}
 
 
