#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> ii;
 
bool compare(ii a, ii b){
    if (a.first > b.first) return true;
    if (a.first == b.first && a.second > b.second) return true;
    return false;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    vector<ii> a;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        a.push_back(ii(x,y/2));
    }
    sort(a.begin(), a.end(), compare);
    ll curheight = 0;
    ll res = 0;
    for(int i=0;i<a.size();i++){
        if (a[i].second > curheight){
            res += (a[i].second - curheight) * a[i].first;
            curheight = a[i].second;
        }
    } 
    cout << res * 2;
    return 0;
} 
