#include<bits/stdc++.h>
 
using namespace std;
 
int n;
int cnt[3] = {0};
bool flag = true;
 
void process(){
    cin >> n;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        if (tmp == 25){
            cnt[0]++;
        }
        if (tmp == 50){
            cnt[1]++;
            if (cnt[0] != 0){
                cnt[0]--;
            }
            else{
                flag = false;
            }
        }
        if (tmp == 100){
            if (cnt[1] != 0 && cnt[0] != 0){
                cnt[1]--;
                cnt[0]--;
            }
            else if (cnt[1] == 0 && cnt[1] >= 3){
                cnt[0] -= 3;
            }
            else{
                flag = false;
            }
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";
}
 
int main(){
 
    process();
 
    return 0;
}  
