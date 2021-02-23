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
const int limit = 1e6+6;
 
int a[20];
int s[limit];
int n;
ll m;
vector<string> res;
bool flag = false;
int k=1;
 
string numToString(ll x){
	stringstream ss;
	string ans = "";
	ss << x;
	ss >> ans;
	return ans;
}
 
void xuly(){
	string tmp;
	tmp = numToString(a[1]);
	
	if( a[1] < 0){
		tmp = '(' + tmp + ')';
	}
	
	string st = "";
	st = st + tmp;
	ll mul = 1;
	ll sumz = a[1];
	for(int i=1;i<=n-1;i++){
		if( s[i] == 0 ){
			sumz = sumz + a[i+1];
			st = st + '+';
			string x;
			x = numToString(a[i+1]);
			if(a[i+1]<0){
				x='('+x+')';
			}
			st=st+x;
		}
		if(s[i] == 1){
			sumz = sumz - a[i+1];
			st = st + '-';
			string x;
			x= numToString(a[i+1]);
			if( a[i+1] < 0){
				x = '('+x+')';
			}	
			st = st + x;
		}
		if(s[i] == 2){
			if(i == 1){
				sumz = a[i] * a[i+1];
				mul = a[i] * a[i+1];
				string x;
				x= numToString(a[i+1]);
				if(a[i+1] < 0){
					x = '(' + x + ')';
				}	
				st = st + '*' +x;
			}
			else{
				if(s[i-1] == 0){
					sumz = sumz - a[i] + a[i] * a[i+1];
					mul = a[i] * a[i+1];
				}
				if(s[i-1] == 1){
					sumz = sumz + a[i] - a[i] * a[i+1];
					mul = 0 - a[i] * a[i+1];
				}
				if(s[i-1] == 2){
					sumz = sumz - mul + mul * a[i+1];
					mul = mul * a[i+1];
				}
				st = st + '*';
				string x;
				x = numToString(a[i+1]);
				if( a[i+1] < 0){
					x = '(' + x +')';
				}
				st=st+x;			
			}
		}
	}
	if(sumz == m){
		string tmp;
		tmp = numToString(m);
		st = st + '=' + tmp;
		res.push_back(st);
		flag = true;
	}
 
}
 
void Try(int i){
	if(i>n-1){
		xuly();
	}
	else{
		s[i]=0;Try(i+1);
		s[i]=1;Try(i+1);
		s[i]=2;Try(i+1);
	}
}
 
void init(){
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
}
 
void process(){
	Try(1);
	if(flag == false){
		cout<<"IMPOSSIBLE";
		return ;
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}
}
 
int main(){
	
	faster();
	
	init();
	process();
	
	return 0;
}   
