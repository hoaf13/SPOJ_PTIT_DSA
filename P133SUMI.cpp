#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
 
#define faster() ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
     
using namespace std;
 
string s;
string res = "";
int index_row= 0;
int index_col= 0;
 
void init(){
    cin>>s;
}
 
void process(){
	int n = s.length();
    for(int i=sqrt(n);i>=1;i--){
        if (n%i == 0){
			index_row = i;
	        index_col = n/i;
			break;
	    }
    }
    for(int i=0;i<index_row;i++){
    	string tmp = "";
    	int tmp_index = i;
    	for(int j=0;j<index_col;j++){
    		tmp+=s[tmp_index];
			tmp_index+=index_row;	
		}
		res+=tmp;
	}
	cout<<res;
}
 
int main(){
    faster();
 
    init();
    process();
 
    return 0;
} 
