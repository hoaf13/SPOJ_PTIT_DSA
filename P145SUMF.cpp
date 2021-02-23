#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	int r,c;
	int a,b;
	cin>>r>>c>>a>>b;
	string banCo[100][100];
	// khoi tao
	for (int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if (i%2==1){
				if (j%2==1) banCo[i][j]="X";
				else banCo[i][j]=".";
			}else{
				if (j%2==1) banCo[i][j]=".";
				else banCo[i][j]="X";
			}
		}
	}
	
	// mo rong ngang
	for (int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(banCo[i][j]=="."){
				for(int k=2;k<=b;k++){
					banCo[i][j]+=".";
				}
			}else{
				for(int k=2;k<=b;k++){
					banCo[i][j]+="X";
				}
			}
		}
	}
	// sao chep 2 dong sole cua ban co
	string tmp1="";
	string tmp2="";
	for (int i=1;i<=c;i++) tmp1+=banCo[1][i];
	for (int i=1;i<=c;i++) tmp2+=banCo[2][i];
	// in ban co
	for (int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<banCo[i][j];
		}
		cout<<endl;
		if (i%2==1){
			for(int k=2;k<=a;k++) cout<<tmp1<<endl;
		}else for(int k=2;k<=a;k++) cout<<tmp2<<endl;
 
	}
	
return 0;
}
 
