#include<bits/stdc++.h>
 
using namespace std;
 
#define i64 long long
 
struct Big{
    int neg=0;
    vector<int> num;
    Big(){
        neg=0;
        num.push_back(0);
    }
    Big(string x){
        if(x[0]=='-'){
            neg=1;
            x.erase(x.begin());
        }
        else neg=0;
        num.assign(x.size(),0);
        for(int i=0;i<x.size();i++)num[i]=x[x.size()-1-i]-'0';
    }
    void fix(){
        num.push_back(0);
        num.push_back(0);
        for(int i=0;i<num.size()-1;i++)
        {
            num[i+1]+=num[i]/10;
            num[i]%=10;
            if(num[i]<0)
            {
                num[i]+=10;
                num[i+1]-=1;
            }
        }
        while(num.size()>1&&num.back()==0)num.pop_back();
    }
    bool operator > ( Big a){
        this->fix();
        a.fix();
        if(this->num.size()==a.num.size()){
            for(int i=num.size()-1;i>=0;i--)if(num[i]!=a.num[i])return num[i]>a.num[i];
            return false;
        }
        return this->num.size()>a.num.size();
        
    }
    bool operator ==(const Big &a){
        return (a.num==num);
    }
    Big operator + (const Big &a){
        Big kq;
        kq.num.assign(max(this->num.size(),a.num.size()),0);
        for(int i=0;i<kq.num.size();i++){
            if(i<this->num.size())kq.num[i]+=this->num[i];
            if(i<a.num.size())kq.num[i]+=a.num[i];
        }
        kq.fix();
        return kq;
    }
    Big operator - (const Big &a){
        //if(*this==a)return Big();
        Big kq;
        kq.num.assign(max(this->num.size(),a.num.size())+5,0);
        if(this->neg!=a.neg){
            kq=*this+a;
            kq.neg=this->neg;
            return kq;
        }
        if(this->neg){
            //- - (-)=a-this
            
            // -4 - (-2)=2-4=-2
            // -2- (-4)=4-2
            if(*this>a){
                
                kq.neg=1;
                for(int i=0;i<kq.num.size();i++){
                    if(i<this->num.size())kq.num[i]+=this->num[i];
                    if(i<a.num.size())kq.num[i]-=a.num[i];
                }
                kq.fix();
                return kq;
            }
            else
            {
                for(int i=0;i<kq.num.size();i++){
                    if(i<this->num.size())kq.num[i]-=this->num[i];
                    if(i<a.num.size())kq.num[i]+=a.num[i];
                }
                kq.fix();
                return kq;
            }
        }
        else
        {
            
            // 4-2=2
            if(*this>a){
                for(int i=0;i<kq.num.size();i++){
                    if(i<this->num.size())kq.num[i]+=this->num[i];
                    if(i<a.num.size())kq.num[i]-=a.num[i];
                }
                kq.fix();
                return kq;
            }
            else
            {
                // 2-4
                kq.neg=1;
                for(int i=0;i<kq.num.size();i++){
                    if(i<this->num.size())kq.num[i]-=this->num[i];
                    if(i<a.num.size())kq.num[i]+=a.num[i];
                }
                kq.fix();
                return kq;
            }
        }
    }
    Big operator * (const Big a){
        Big kq;
        kq.num.assign(a.num.size()*this->num.size(),0);
        for(int i=0;i<num.size();i++){
            for(int j=0;j<a.num.size();j++){
                kq.num[i+j]+=num[i]*a.num[j];
            }
        }
        kq.fix();
        return kq;
    }
    void printf(){
        for(int i=num.size()-1;i>=0;i--)cout<<num[i];cout<<endl;
    }
    Big operator / ( Big a){
        int negva=(this->neg!=a.neg);
        if(a>*this){
            return Big();
        }
        string res="";
        Big cur("0");
        cur.num.clear();
        for(int i=num.size()-1;i>=0;i--){
            cur.neg=0;
            cur.num.insert(cur.num.begin(),num[i]);
            int tmp=1;
            for(int k=1;k<=10;k++){
                if(a*Big(to_string(k))>cur){
                    
                    tmp=k;
                    break;
                }
            }
            tmp-=1;
        
            cur=cur-a*Big(to_string(tmp));
            res=res+char(tmp+'0');
        }
        Big kq=Big(res);
        kq.fix();
        kq.neg=negva;
        return kq;
    }
 
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        Big a(x),b(y);
        if(x[0]=='-')x.erase(x.begin());
        if(y[0]=='-')y.erase(y.begin());
        a=a/b;
        for(int i=0;i<a.num.size();i++)cout<<char(a.num[a.num.size()-1-i]+'0');
        cout<<'\n';
    }
} 
