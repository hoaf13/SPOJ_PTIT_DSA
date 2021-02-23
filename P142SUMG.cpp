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
 
 
int AT[200];
 
void init (){
	for (int i=0; i<=200; i++)
		AT[i]=0;
}
 
int main (){
	int n;
	cin>>n;
	string xau;
	cin.ignore();
	for (int k=1; k<=n; k++){
		getline (cin, xau);
		init ();
		int CMax = 0;
		for (int i=0; i<xau.length(); i++){
			if (xau[i]>='A' && xau[i]<='Z'){
				int x = xau[i] - 0;
				AT[x]++;
				CMax = max (AT[x], CMax);
			}
		}
 
		int count=0;
		char tmp;
		for (int i=0; i<=125; i++){
			if (AT[i]==CMax){
				tmp = i + 0;
				count++;
				if (count>1) break;
			}
		}
		if (count!=1) cout<<"NOT POSSIBLE"<<endl;
		else{
			int d;
			if (tmp>='E' && tmp<='Z')
				d = tmp - 'E';
			else if (tmp>='A' && tmp <'E')
				d = 5 - ('E' - tmp) + 21;
			cout<<d<<" ";
			for (int i=0; i<xau.size(); i++){
				if (xau[i]>='A' && xau[i]<='Z'){
					int tmp_move = xau[i] - d;
					if (tmp_move >= 65){
						char c = tmp_move;
						cout<<c;
					}
					else{
						tmp_move = 65 - tmp_move;
						char c = 91 - tmp_move;
						cout<<c;
					}
				}
				else
					cout<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
} 
