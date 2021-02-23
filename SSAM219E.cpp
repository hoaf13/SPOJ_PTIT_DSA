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
 
int getVal(char x){
	if (x == '^') return 3;
	if (x == '*' || x == '/') return 2;
	if (x == '+' || x == '-') return 1;
	if (x == '(') return 0;
}
 
void init(){
	cin >> s;
}
 
void process(){
	string res = "";
	stack<char> stk;
	for(int i=0;i<s.length();i++){
		if (s[i] >= 'a' && s[i] <= 'z'){
			res += s[i];
		}
		else if (s[i] == '(') stk.push(s[i]);
		else if (s[i] == ')'){
			while(stk.top() != '('){
				res += stk.top();
				stk.pop();
			}	
			stk.pop();
		}
		else{
			if (stk.empty() || getVal(stk.top()) < getVal(s[i])){
				stk.push(s[i]);				
			}
			else{
				while (stk.size() && getVal(stk.top()) >= getVal(s[i])){
					res += stk.top();
					stk.pop();
				}
				stk.push(s[i]);
			}
		}
	}
	while(stk.size()){
		res += stk.top();
		stk.pop();
	}
	cout << res << endl;
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
 
  
