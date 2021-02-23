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
 
int t,n,a,b;
 
int main(){
	faster();
	
    cin>>t;
    while(t--){
        cin >> n >> a >> b;
        bool flag = false;
        if (a<b) swap(a,b);
        int x = n/a;
        for(int i=x;i>=0;i--){
            int c=n-a*i;
            if( c%b == 0){
                flag = true;
                int y = c/b;
                cout << y+i << endl;
                break;
            }
        }
        if( flag == false ) cout<<-1<<endl;
    }
    
	return 0;
}
 
 
 
