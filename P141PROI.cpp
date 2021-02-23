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
 
struct Data{
	ll val;
	int deg;
	int dd[1003];
};
int n,m,k;
vector<Data> nextto[1003];
int a[1003];
//int visited[1003] = {0};
bool flag = false;
 
struct cmp{
	bool operator() (Data a , Data b){
		return (a.val > b.val);
	}
};
priority_queue<Data , vector<Data> , cmp> heap;
 
ll res = 0;
 
void init(){
	cin >> n >> m >> k;
	for(int i=0;i<k;i++){
		cin >> a[i];
	}
	for (int i=0;i<m;i++){
		int u,v;
		ll w;
		Data tmp;
		cin >> u >> v >> w;
		tmp.val = w;
		tmp.deg = v;
		nextto[u].pb(tmp);
	}	
}
 
bool check(Data v){
	for (int i=0;i<k;i++){
		if (v.dd[a[i]] == 0) return false;
	}
	return true;
}
 
void process(){
	
// ================== Khoi tao Heap ================================	
	int o = a[0];
	for (int i=0;i<nextto[o].size();i++){
		Data tmp;
		tmp.val = nextto[o][i].val;
		tmp.deg = nextto[o][i].deg;
		for(int i=1;i<=n;i++){
			tmp.dd[i] = 0;
		}
		tmp.dd[tmp.deg] = 1;
		heap.push(tmp);
		
//		visited[tmp.deg] = 1;
	}
//=================================================================
 
	while(heap.size()){
		if (flag) break;
		Data u = heap.top();
//		cout << u.deg << " " << u.val << endl;
		heap.pop();
		for(int i=0;i<nextto[u.deg].size();i++){
			Data v;
			v.val = u.val + nextto[u.deg][i].val;
			v.deg = nextto[u.deg][i].deg;
			for(int j=1;j<=n;j++){
				v.dd[j] = u.dd[j];
			}	
			v.dd[v.deg] = 1;
//			if (visited[v.deg] == 0){
//				visited[v.deg] = 1;
				heap.push(v);
				if (check(v)){
					res = v.val;
					flag = true;
					break;
				}
//			}
		}
	}
	if (flag == false) cout << -1;
	else cout << res;
}
 
 
int main(){
	faster();
	
	
	init();
	process();
 
 
	return 0;
}
 
 
 
