#include<bits/stdc++.h>
 
using namespace std;
 
long long res = 0;
long long s,n;
vector<long long> a;
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
 
    cin >> n >> s;
    a.resize(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long ans = 0;
	ans += abs(a[n/2] - s);
	for(int i =  0;i<n/2;i++){
		if(a[i] > s){
			ans+= a[i] - s;
		}
	}
	for(int i = n/2 + 1;i<n;i++){
		ans+= max(0LL,s - a[i]);
	}
	cout << ans << endl;    
    
    return 0;
}   
