#include<bits/stdc++.h>
 
using namespace std;
 
typedef pair<double, double> dd; 
dd co[3];
int n;
vector<dd> a;
int cnt = 0;
 
void init(){
    for(int i=0;i<3;i++) cin >> co[i].first >> co[i].second;
    cin >> n;
    a.resize(n);
    for(int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
}
 
double distance(dd x, dd y){
    double ans = (x.first - y.first)*(x.first - y.first) + (x.second - y.second)*(x.second - y.second);
    return sqrt(ans);
}
 
double s(double x, double y, double z){
    double p = (x+y+z)/2;
    double ans = sqrt( p*(p-x)*(p-y)*(p-z) );
    return ans;
}
 
void process(){
    double edge01 = distance(co[0] , co[1]);
    double edge12 = distance(co[1] , co[2]);
    double edge02 = distance(co[0] , co[2]);
    double squareS = s(edge01,edge02,edge12);
    for(int i=0;i<n;i++){
        double dis0 = distance(a[i] , co[0]);
        double dis1 = distance(a[i] , co[1]);
        double dis2 = distance(a[i] , co[2]);
        double squares1 = s(dis0 ,dis1 ,edge01);
        double squares2 = s(dis0 ,dis2 , edge02);
        double squares3 = s(dis1 ,dis2 , edge12);
        double stmp = squares1 + squares2 + squares3; 
        if (fabs(stmp - squareS) < 0.1){
            cnt++;
        }
        
    }
    printf("%0.1lf\n" , squareS);
    cout << cnt << endl;
}
 
int main(){
 
    init();
    process();
 
    return 0;
} 
