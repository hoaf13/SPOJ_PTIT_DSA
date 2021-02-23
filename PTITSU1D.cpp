#include <iostream>
using namespace std;
 
int main (){
	int T,k=0;
	cin>>T;
	while(k<T){
		k++;
		int n, m;
		cin>>m>>n;
		char build[600][600];
		for (int i=0; i<5*m+1; i++){
			for (int j=0; j<5*n+1; j++){
				cin>>build[i][j];
			}
		}
		int tt[]={0, 0, 0, 0, 0};
		int t=0;
		int movei=1, movej=1;
		for (int i=0; i<m; i++){
			if (i!=0)	movei+=5;
			movej=1;
			for (int j=0; j<n; j++){
				if (j!=0)	movej+=5;
				tt[0]++;
				for (int k=0; k<4; k++){
					if (build[movei+k][movej]=='*'){
						tt[k+1]++;
						tt[k]--;
					}
				}
			}
		}
		for (int i=0; i<5; i++) cout<<tt[i]<<" ";
	}
	return 0;
}
 
