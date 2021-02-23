#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
int n;
vector<int> a;
ll ans = 1;
      
void init(){
    cin >> n;
    a.resize(n,0);
}
 
void process(){
    if (n == 1) {
        cout << "1 0" << endl;
        return ;
    }
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            ans *= i;
            while (n % i == 0) {
                a[i]++;
                n /= i;
            }
        }
    }
    int mul = 1;
    for (int i = 0; i < a.size(); i++) {
        mul = max(mul, a[i]);
    }
    bool ok = (mul & (mul - 1)) == 0;
    for (int i = 0; i < a.size(); i++) {
    if (a[i] > 0 and a[i] != mul) {
        ok = false;
        break;
        }
    }
    int steps = ceil(log2(mul));
    if (!ok) {
        steps++;
    }
    cout << ans << " " << steps << endl;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
    init();
    process();
    
    return 0;
} 
