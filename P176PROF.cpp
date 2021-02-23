#include<bits/stdc++.h>
 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
 
string a;
 
 
 
void init(){
	cin>>a;
}
 
void process(){
    int nguoi=0,zombie=0,r;
    string kq="";
    for(int i=0;i<a.length();i++){
        if(a[i]=='('){
            r=kq.length();
            zombie=max(zombie,r);
            kq="";
            i++;
            string tmp="";
            while(1){
                if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                    tmp+=a[i];
                    if(a[i+1]==')' || i+1==a.length()){
                        tmp="";
                        nguoi++;
                        break;
                    }
                    else i++;
                }
                else if(a[i]=='_'){
                    if(tmp.length()>0){
                        nguoi++;
                        tmp="";
                    }
                    if(a[i+1]==')' || i+1==a.length()) break;
                    else i++;
                }
                else if(a[i]==')') break;
            }
        }
        else if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
            while(1){
                if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                    kq+=a[i];
                    if(a[i+1]=='(' || i+1==a.length() || a[i+1]=='_'){
                        r=kq.length();
                        zombie=max(zombie,r);
                        kq="";
                        break;
                    }
                    else i++;
                }
            }
        }
    }
    cout<<zombie<<" "<<nguoi<<endl;
}
 
 
int main(){
	faster();
	int T;
    cin>>T;
    cin.ignore();
    while(T--){
		init();
		process();
	}
	return 0;
}
 
 
 
