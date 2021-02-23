#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll calz(ll x){
    ll ans = x;
    string str;
    stringstream ss;
    ss << x;
    ss >> str;
    for(int i=0;i<str.length();i++){
        ans -= (str[i] - '0');
    }
    return ans;
}
 
ll Bsearch(ll l, ll r , ll x){
    ll ans = -1;
    while (l <= r)
    {
        ll mid = (l+r)/2;
        if (calz(mid) >= x){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}
 
int main(){ 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
    ll res = 0;
    ll n,s;
    cin >> n >> s;
    ll m = n - (n%10);
    ll tmp = m;
    string str;
    stringstream ss;
    ss << m;
    ss >> str;
    for(int i=0;i<str.length();i++){
        tmp -= (str[i] - '0');
    }
    if (s > tmp ) res = 0;
    else if (s == tmp) res = n-m+1;
    else{
        res = n - Bsearch(0,n,s) + 1;
    }
    if (s == 0) res--;
    cout << res;
    return 0;
} 
