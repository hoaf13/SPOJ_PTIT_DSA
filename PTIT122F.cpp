#include<iostream>
#include<cmath>
#include<string>
using namespace std;
long dequy(string a,string b,int i,int x){
    if(a[i]=='0') return 0;
    if(a[i]=='?') return (9-(b[i]-'0'))*(long long)pow(10,x-1)+dequy(a,b,i+1,x-1);
    else if(a[i]<b[i]) return 0;
    else if(a[i]>b[i]) return (long long)pow(10,x);
    return dequy(a,b,i+1,x);
}
int main(){
    string a;
    cin>>a;
    while(a[0]!='#'){
        string b;
        cin>>b;
        int dau=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='?') dau++;
        }
        long long kq=dequy(a,b,0,dau);
        cout<<kq<<endl;
        cin>>a;
    }
    return 0;
} 
