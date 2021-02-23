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
 
 
int main(){
	int T;
	cin>>T;
	while(T--){
		string alpha="";
		for (int i=97;i<=122;i++){
			alpha.push_back(i);
		}
		string s;
		cin>>s;
		if (s.length()<=3){
			cout<<"YES"<<endl;
		}else{
			int dem[alpha.length()]={0};
			for (int i=0;i<s.length();i++){
				for (int j=0;j<alpha.length();j++){
					if (s[i]==alpha[j]){
						dem[j]++;
					}
				}
			}
			int k=0;
			for (int i=0;i<alpha.length();i++){
				if(dem[i]!=0 && dem[i]%2==1){
					k++;
				}
			}
			if (k>=4) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}
return 0;
}
 
