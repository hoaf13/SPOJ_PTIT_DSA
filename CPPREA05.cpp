#include<bits/stdc++.h>
 
using namespace std;
 
 
void process(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin() , a.end());
    int i=0, j = n-1;
    while(i <= j ){
        if (i == j){
            cout << a[i] << " ";
        }else cout << a[j] << " " << a[i] << " ";
        i++;
        j--;
    }
    cout << endl;
}
 
int main(){
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    
} 
