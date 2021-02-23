#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
 
using namespace std;
 
typedef long long ll;
 
int m,s;
string smaz = "";
string smiz = ""; 
 
void init(){
	cin >> m >> s;
}
 
bool checkz(){
	if (m == 1 && s== 0) return false;
	if (s == 0 || s > 9*m) return false;
	return true;
}  
 
void process(){
	if (m == 1 && s == 0){
		cout << 0 << " " << 0;
		return;
	}
	
	if (checkz() == false){
		cout << -1 << " " << -1 ;
		return ;
	}
	
	if (m == 1 ){
		cout << s << ' ' << s;
		return;
	}
 
	
	// max
	int maz = s;
	for(int i=0;i<m;i++){
		if (maz == 0 ){
				smaz += '0';
		}else
		for(int j=9;j>0;j--){
			
			if (maz >= j){
				smaz += (j + '0');
				maz -= j;
				break;
			}
		}
	}
	
	//min
	
	int miz = s;
	if (miz >= 1){
		smiz = "1";
		miz--;
	}
	if (smiz == "1"){
		for(int i=0;i<m-1;i++){
			if (miz == 0){
				smiz.insert(smiz.begin()+1,1,'0');				
			}
			else
			for(int j = 9 ; j >=0 ; j--){
				if (miz >= j){
					smiz.insert(smiz.begin()+1,1,'0'+j);
					miz -= j;
					break;
				}
			}
		}
	}else{
		for(int i=0;i<m-1;i++){
			if (miz == 0){
				smiz.insert(smiz.begin()+1,1,'0');				
			}
			else
			for(int j = 9 ; j >=0 ; j--){
				if (miz >= j){
					smiz.insert(smiz.begin(),1,'0'+j);
					miz -= j;
					break;
				}
			}
		}
	}
	if (miz != 0){
		smiz[0] = (miz+1) +'0';
	}
	cout << smiz << " " << smaz;
}
 
int main(){
 
	faster();
 
	init();
	process();
	
	return 0;
}
 
 
 
 
