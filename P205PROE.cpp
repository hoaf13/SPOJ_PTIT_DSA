#include<bits/stdc++.h>
 
using namespace std;
 
int n;
string s1, s2;
 
void init(){
	cin >> n;
	cin >> s1 >> s2;
}
 
void process(){
	int res = 0;
	for(int i=0;i<s1.length();i++){
		int tmp = min(abs(s1[i] - (10+s2[i])),abs((10+s1[i]) - s2[i]) );
		res += min(tmp, abs(s1[i] - s2[i]));
	}
	cout << res;
}
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	init();
	process();
 
} 
