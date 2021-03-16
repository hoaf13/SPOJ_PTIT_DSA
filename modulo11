#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll modulo11(ll a, ll b, ll c) {
	if (b==0) {
		return 0;
	}
	
	ll s=modulo11(a, b/2, c);
	s=(2*s)%c;
	
	if (b%2!=0) {
		s=(s+a)%c;
	}
	return s;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll a, b, c;
		cin>>a>>b>>c;
		
		cout<<modulo11(a, b, c)<<endl;
	}
	
	return 0;
}
