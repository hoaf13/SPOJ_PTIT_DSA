#include<iostream>
#include<string>
 
#define faster() ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
 
using namespace std;
 
string bin_s;
string res = "";
 
void init(){
    cin>>bin_s;
}
 
int binToOct(string x){
	int ans = 0;
	if (x[0] == '1') ans+=4;
	if (x[1] == '1') ans+=2;
	if (x[2] == '1') ans+=1;
	return ans;
}
 
void process(){
    int k = (bin_s.length())%3;
    
    if (k != 0){
	    for(int i=0;i<3-k;i++){
	        bin_s = "0" + bin_s;
	    }
	}
    for(int i=0;i<bin_s.length()-2;i+=3){
    	string tmp = "";
    	tmp += bin_s[i];
    	tmp += bin_s[i+1];
    	tmp += bin_s[i+2];
		int tmp_ans = binToOct(tmp);
		res += tmp_ans + '0';
    }
    cout<<res;
}
 
int main(){
    faster();
 
    init();
    process();
 
    return 0;
} 
