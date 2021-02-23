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
 
int a[30],n;
ll res = 0; 
int m = 0;
 
void init (){
    cin >> n; 
    int tmp = n;
    while(tmp != 0){
    	m++;
    	tmp /= 10;
	}
}
 
ll update(int x){
	ll ans = 0;
	for(int i=0;i<=x;i++){
		ans = ans * 10 + a[i]; 
	}
	if (ans % n == 0){
		return ans;
	}
	return -1;
}
 
void tim(int i){
	if (res == 0){
	    for(int j=0;j<=1;j++){
			if (i == 0) j++;
			if (j == 0) a[i] = 0;
			else a[i] = 9;       
		    if(i == m-1){
	          	if (update(i) != -1){
	            	res = update(i);
	            	return;
				}
	        }
			else
	            tim(i+1); 
	    }
	}
	    
}
 
void clear_all(){
	m = 0;
	n = 0;
	res = 0;
	for(int i=0;i<30;i++){
		a[i] = 0;
	}
}
 
int main(){
//	faster();
	int T;
	cin >> T;
	while(T--){
		clear_all();
	    init();  
	    int indez = 0;
	    while(1){
			tim(0);
			if (res != 0){
				cout << res;
				printf("\n");
				break;
			}
			m++;	
		}
	}
	return 0;
}  
