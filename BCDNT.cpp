#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair< ll , ll> II;
 
const ll limit = 1e5+5;
II b[limit];
ll a[limit];
ll st[4*limit];
int n;
ll res = 0;
 
void init(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(b+1,b+1+n);
    int indez = 0;
    int lastz = -1e9;
    for(int i=1;i<=n;i++){
        if (b[i].first != lastz){
            indez++;
            lastz = b[i].first;
        }
        a[b[i].second] = indez;
    }
    
}
 
void Build(int node , int l, int r, int x, ll val){
    if (l > x || r < x) return;
    if (x == l && r == x){
        st[node] += val;
        return;
    }
    int mid = (l+r)/2;
    Build(node*2,l,mid,x,val);
    Build(node*2+1,mid+1,r,x,val);
    st[node] = st[node*2] + st[node*2+1];
}
 
ll Sumz(int node ,int l ,int r , int u , int v){
    if (l > v || r < u) return 0;
    if (u <= l && r <= v ) return st[node];
    int mid = (l+r)/2;
    ll ans1 = Sumz(node*2,l,mid,u,v);
    ll ans2 = Sumz(node*2+1,mid+1,r,u,v);
    return ans1 + ans2;
}
 
void process(){
    for(int i=n;i>=1;i--){
        res += Sumz(1,1,limit,1,a[i]-1);
        Build(1,1,limit,a[i],1);
    }
    cout << res;
}
 
int main(){
 
    init();
    process();
 
    return 0;
}
     
