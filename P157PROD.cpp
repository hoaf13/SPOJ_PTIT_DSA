/*
 * =====================================================================================
 *
 *       Filename:  P157PROD.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/09/2019 00:18:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  hoaf13 (paxd), gam.nhosmiles2000@gmail.com
 *        Company:  Posts and Telecommunications Institute of Technology
 *
 * =====================================================================================
 */
 
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
 
 
string s;
int dd[10] = {0};
 
 
void init(){
	cin>>s;
	for(int i=0;i<s.length();i++){
		int k = s[i] - '0';
		dd[k] = 1;
	}
}
 
 
void divide_equation(string &tmp_s1, string &tmp_s2, string &tmp_s3, string tmp, int &op){			// tach cac thanh` phan` trong phuong trinh
	int index = 0;
	if (tmp[0] == '-'){
		index = 1;
		tmp_s1+="-";	
	}
	while( tmp[index] != '+' && tmp[index] != '-' && tmp[index] != '*' && tmp[index] != '=' ){
		tmp_s1+=tmp[index];
		index++;
	}
	
	if (tmp[index] == '+') op = 1;
	else if (tmp[index] == '-') op = 2;
	else op = 3;	
	
	index++;
	if (tmp[index] == '-'){
		tmp_s2+="-";
		index++;
	}
	while( tmp[index] != '+' && tmp[index] != '-' && tmp[index] != '*' && tmp[index] != '=' ){
		tmp_s2+=tmp[index];
		index++;
	}
	index++;
	if (tmp[index] == '-'){
		tmp_s3+="-";
		index++;
	}
	for(int i=index;i<tmp.length();i++){
		tmp_s3 += tmp[i];
	}
}
 
int stringToNum(string x){
	ll ans = 0;
	stringstream ss;
	ss << x;
	ss >> ans;
	return ans;
}
 
void process(){
	for(int i=0;i<=9;i++){
		if (dd[i] == 1) continue;		// dieu kien 3
		string tmp = s;
		string tmp_s1="" , tmp_s2 = "" , tmp_s3 = "";
		int op;
		for(int j=0;j<tmp.length();j++){
			if (tmp[j] == '?'){
				tmp[j] = i + '0';
			}
		}
		
		divide_equation(tmp_s1,tmp_s2,tmp_s3,tmp,op);
		
		if (tmp_s1[0] == '-'){											// dieu kien 1 
			if (tmp_s1[1] == '0' && tmp_s1.length() > 2 ) continue;
		}else{
			if (tmp_s1[0] == '0' && tmp_s1.length() > 1 ) continue;
		}
		if (tmp_s2[0] == '-'){
			if (tmp_s2[1] == '0' && tmp_s2.length() > 2 ) continue;
		}else{
			if (tmp_s2[0] == '0' && tmp_s2.length() > 1) continue;
		}
		if (tmp_s3[0] == '-'){
			if (tmp_s3[1] == '0' && tmp_s3.length() > 2 ) continue;
		}else{
			if (tmp_s3[0] == '0' && tmp_s3.length() > 1) continue;
		}
		
		int ele1 = stringToNum(tmp_s1);
		int ele2 = stringToNum(tmp_s2);
		int ele3 = stringToNum(tmp_s3);
 
		switch(op){
			case 1:
				if (ele1 + ele2 == ele3 ){
					cout<<i<<endl;
					return;
				}
				break;
			case 2:
				if (ele1 - ele2 == ele3){
					cout<<i<<endl;
					return;
				}
				break;
			case 3:
				if (ele1 * ele2 == ele3 ){
					cout<<i<<endl;
					return;
				}
				break;
			}
	}
	cout<<-1<<endl;
}
 
void clear_all(){
	for(int i=0;i<=9;i++){
		dd[i] = 0;
	}
}
 
int main(){
	faster();
	int T;
	cin>>T;
	while(T--){
		clear_all();
		init();
		process();
	}
	return 0;
}
 
 
 
 
