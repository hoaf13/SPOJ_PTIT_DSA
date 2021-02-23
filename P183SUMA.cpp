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
 
struct point{
	int x,y;
};
 
vector<point> h1,h2;
int dd[300][300] = {0};
 
void init(){
	point tmp;
	for(int i=0;i<4;i++){
		int x , y;
		cin >> x >> y;
		tmp.x = x + 100 ;
		tmp.y = y + 100 ;
		h1.pb(tmp);
	}	
	for(int i=0;i<4;i++){
		int x , y;
		cin >> x >> y;
		tmp.x = x + 100;
		tmp.y = y + 100;
		h2.pb(tmp);
	}
}
 
bool cmp1 ( point a , point b){
	if (a.y < b.y) return true;
	if (a.y == b.y){
		if (a.x < b.x) return true;
	}
	return false;
}
 
bool cmp2 (point a , point b){
	if (a.x < b.x) return true;
	if (a.x == b.x ){
		if (a.y < b.y ) return true;
	}
	return false;
}
 
void process(){
	sort(h1.begin(),h1.end(),cmp1);
	swap(h1[2] , h1[3]);
	sort(h2.begin(),h2.end(),cmp2);
	swap(h2[2] , h2[3]);
	
//========================= process h1 =========================
 
	int h1_begin_row = h1[0].y;
	int h1_end_row = h1[3].y;
	int h1_begin_col = h1[0].x;
	int h1_end_col = h1[1].x;
	
	for (int i=h1_begin_row ; i <= h1_end_row ;i++){
		for (int j=h1_begin_col ; j <= h1_end_col ; j++ ){
			dd[i][j] = 1;
		}
	}
 
//========================= process h2 ==========================
 
	int h2_begin_row = h2[1].y;
	int h2_end_row = h2[3].y;
	int h2_mid_row = h2[0].y;
	int h2_main_col = h2[1].x;
	int index = -1;
	
	for (int i=h2_begin_row;i<=h2_mid_row;i++){
		index++;
		for(int j=0;j<=index;j++){
			dd[i][h2_main_col - j] = 2;
			dd[i][h2_main_col + j] = 2;
		}
	}
	for (int i=h2_mid_row;i<=h2_end_row;i++){
		
		for(int j=0;j<=index;j++){
			dd[i][h2_main_col - j] = 2;
			dd[i][h2_main_col + j] = 2;
		}
		index--;
	}
	
	
	for (int i=h1_begin_row ; i <= h1_end_row ;i++){
		for (int j=h1_begin_col ; j <= h1_end_col ; j++ ){
			if ( dd[i][j] == 2 ){
				cout<<"Yes";
				return;
			}
		}
	}
	cout<<"No";
 
//	for (int i=0;i<=10;i++){
//		for(int j=0;j<=10;j++){
//			cout<<dd[i][j];
//		}
//		cout<<endl;
//	}
	
 
}
 
 
int main(){
	faster();
	
	
	init();
	process();
 
 
	return 0;
}
 
 
 
