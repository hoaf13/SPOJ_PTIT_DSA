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
	int n;
	cin>>n;
	string beside="+------------------------+";
	char seat[100][100];
	for (int i=1;i<=4;i++){
		for (int j=1;j<=27;j++){
			if (j%2==0) seat[i][j]='#';
			else seat[i][j]='.'; 
		}
	}
	for (int i=1;i<=4;i++){
		seat[i][1]='|';
		seat[i][26]='|';
		seat[i][24]='|';
	}
	seat[3][24]='.';
	seat[1][25]='D';
	seat[1][27]=')';
	seat[4][27]=')';
	seat[2][27]=' ';
	seat[3][27]=' ';
	for (int i=3;i<=25;i++){
		seat[3][i]='.';
	}
	vi cot;
	vi hang;	
	for (int i=1;i<=27;i++){
		for (int j=1;j<=4;j++){
			if (seat[j][i]=='#'){
				cot.push_back(i);
				hang.push_back(j);
			}
		}
	}
	int i=0;
	int j=0;
	while(n--){
		seat[hang[i++]][cot[j++]]='O';
	}	
	
	cout<<beside<<endl;
	for (int i=1;i<=4;i++){
		for (int j=1;j<=27;j++){
			cout<<seat[i][j];
		}
		cout<<endl;
	}
	cout<<beside;
	
return 0;
}
 
