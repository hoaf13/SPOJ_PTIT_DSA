#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	char s;
	vector<int> freq(10,0);
	int x,y,z;
	for(int i=0;i<6;i++){
		cin>>s;
		freq[s-'0']++;
	}
	bool check=false;
	for(int i=0;i<freq.size();i++)
		if(freq[i]>=4) {
			check=true;
			freq[i]-=4;
			break;
		}
	if(check){
		int l=0, r=freq.size()-1;
		while(freq[l]==0) l++;
		while(freq[r]==0) r--;
		if(l<r)	{
			cout<<"Bear"; 
			return 0;	
		}else{
			cout<<"Elephant"; 
			return 0;
		}
	}
	cout<<"Alien";
	return 0;
} 
