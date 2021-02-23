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
 
struct coordinate{
	int x;
	int y;
	int z;
};
 
coordinate point[4];
coordinate vec[3];
 
void init(){
	for(int i=0;i<4;i++){
		cin >> point[i].x >> point[i].y >> point[i].z;
	}
}
 
void process(){
	vec[0].x = (point[1].x - point[0].x);
	vec[0].y = (point[1].y - point[0].y);
	vec[0].z = (point[1].z - point[0].z);
	
	vec[1].x = (point[2].x - point[0].x);
	vec[1].y = (point[2].y - point[0].y);
	vec[1].z = (point[2].z - point[0].z);
	
	vec[2].x = (point[3].x - point[0].x);
	vec[2].y = (point[3].y - point[0].y);
	vec[2].z = (point[3].z - point[0].z);
	
	coordinate vec_AB;
	
	vec_AB.x = vec[0].y * vec[1].z - vec[0].z * vec[1].y;
	vec_AB.y = vec[0].z * vec[1].x - vec[0].x * vec[1].z;
	vec_AB.z = vec[0].x * vec[1].y - vec[0].y * vec[1].x; 
	
	int res = 0;
	res = vec_AB.x*vec[2].x + vec_AB.y * vec[2].y + vec_AB.z * vec[2].z;
	if (res == 0 ) cout << "YES\n" ;
	else cout << "NO\n";
}
 
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--){
		init();
		process();
	}
	return 0;
}  
