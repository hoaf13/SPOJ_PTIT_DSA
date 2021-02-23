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
typedef pair<int,char> II;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
 
 
int a[100];
	string s1,s2,s3;
	
void init(){
 
	cin>>s1>>s2>>s3;
	a[1] = s1[0]-'0';
	a[2] = s2[0]-'0';
	a[3] = s3[0]-'0';	
}
 
void process(){
	
	if(s1[1]!=s2[1]&&s2[1]!=s3[1]&&s1[1]!=s3[1]) {
		cout<<"2";
	}	
	else if(s1[1]==s2[1]&&s2[1]==s3[1]){
		sort(a+1,a+1+3);
		if(a[1]==a[2]&&a[2]==a[3]){
			cout<<"0";
		}
		else if(a[1]==a[2]&&a[2]!=a[3]){
			cout<<"1";
		}
		else if(a[1]!=a[2]&&a[2]==a[3]){
			cout<<"1";
		}
		else if(a[1]+1==a[2]&&a[1]+2==a[3]) cout<<"0";
		else if(abs(a[2]-a[1])<=2) cout<<"1";
		else if(abs(a[3]-a[2])<=2) cout<<"1";
		else{
		ll cnt = 0;
		for(ll i = 2;i<=3;i++){
			if(a[i]-a[i-1]!=1) cnt++;
		}
		cout<<cnt;
		}
	}
	else if(s1[1]==s2[1]&&s2[1]!=s3[1]){
		if(abs(a[1]-a[2])<=2) cout<<"1";
		else cout<<"2";
	}
	else if(s1[1]==s3[1]&&s2[1]!=s3[1]){
		if(abs(a[1]-a[3])<=2) cout<<"1";
		else cout<<"2";
	}
	else if(s2[1]==s3[1]&&s3[1]!=s1[1]){
		if(abs(a[2]-a[3])<=2) cout<<"1";
		else cout<<"2";
	}
	else{
		cout<<"2";
	} 
}
 
int main(){
 
	faster();
	
	init();
	process();
	
	return 0;
}  
