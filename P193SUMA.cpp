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
 
string s;
int n,k;
string str="",sub;
 
void clear_all(){
	str = "";
	sub = "";	
}
 
void init(){
	for(int i=0;i<1005;i++){
        str+="BVH";
    }
	cin >> n >> k;
	cin >> sub;
}
 
int countChanges(string s,string str){
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=0,j=0;j<s.size();i++,j++){
        if(s[j]!=str[i]) cnt1++;
    }
    for(int i=1,  j=0;j<s.size();i++,j++){
        if(s[j]!=str[i]) cnt2++;
    }
    for(int i=2,  j=0;j<s.size();i++,j++){
        if(s[j]!=str[i]) cnt3++;
    }
    return min(cnt1,min(cnt2,cnt3));
}
 
void process(){
    int miz=oo;
    for(int i=0;i+k<=n;i++){
        s=sub.substr(i,k);
        miz=min(miz,countChanges(s,str));
    }
    cout<<miz<<endl;
}
 
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--){
		clear_all();
		init();
		process();
	}
	return 0;
}  
