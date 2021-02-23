/*
Trong siÃªu thá» cÃ³ n gÃ³i hÃ ng (n â¤ 100), gÃ³i hÃ ng thá»© i cÃ³ trá»ng lÆ°á»£ng lÃ  W i â¤ 100 vÃ  trá» giÃ¡ V i
â¤ 100. Má»t tÃªn trá»m Äá»t nháº­p vÃ o siÃªu thá», tÃªn trá»m mang theo má»t cÃ¡i tÃºi cÃ³ thá» mang ÄÆ°á»£c
tá»i Äa trá»ng lÆ°á»£ng M ( M â¤ 100). Há»i tÃªn trá»m sáº½ láº¥y Äi nhá»¯ng gÃ³i hÃ ng nÃ o Äá» ÄÆ°á»£c tá»ng giÃ¡
trá» lá»n nháº¥t.
 
INPUT:
5 11
3 3
4 4
5 4
9 10
4 4
 
OUTPUT: // in ra gia tri lon nhat  
11  
*/
 
#include<bits/stdc++.h>
 
using namespace std;
 
typedef pair<int, int> ii;
 
int n;
int m;
vector<ii> a;
vector< vector<int> > f;    //luu gia tri toi uu
// f[i][j] i: goi thu i - j: khoi luong
 
void init(){
    cin >> n >> m;
    a.resize(n+1);
    for(int i=1;i<=n;i++) cin >> a[i].first >> a[i].second; // first = WEIGHT, second = VALUE;
    f.resize(n+1, vector<int> (m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            f[i][j] = f[i-1][j]; // gia su khong chon goi thu i;
            if (j - a[i].first >= 0)    // gia su chon goi thu i va khoi luong con lai > khoi luong goi thu i;
                f[i][j] = max(f[i][j], f[i-1][j-a[i].first] + a[i].second); // cap nhat f[i][j]; 
            // cout << f[i][j] << endl;
        }
    }
    // cout << "Khoi luong lon nhat: ";
    cout << f[n][m] << endl;
}
 
void process(){
 
 
}
 
int main(){
 
    init();
    process();
 
    return 0;
} 
