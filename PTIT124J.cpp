#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
int main (){
    string bin;
    cin>>bin;
    while (bin.length()%3!=0){
        bin = '0'+bin;
    }
    string find="";
    for (int i=0; i<bin.length(); i+=3){
        find="";
        for (int j=i; j<i+3; j++) {
            find+=bin[j];
        }
        if (find=="000") cout<<"0";
        if (find=="001") cout<<"1";
        if (find=="010") cout<<"2";
        if (find=="011") cout<<"3";
        if (find=="100") cout<<"4";
        if (find=="101") cout<<"5";
        if (find=="110") cout<<"6";
        if (find=="111") cout<<"7";
    }
    return 0;
}
 
