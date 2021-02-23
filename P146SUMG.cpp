#include <iostream>
using namespace std;
 
int main (){
 
	int R, C, A, B;
	cin>>R>>C>>A>>B;
	char pic[500][500];
	for (int i=1; i<=R; i++){
		for (int j=1; j<=C; j++){
			cin>>pic[i][j];
		}
	}
	for (int i=1; i<=R; i++){
		for (int l=1; l<=A; l++){
			for (int j=1; j<=C; j++){
				for (int k=1; k<=B; k++) cout<<pic[i][j];
			}
			if (l!=A) cout<<endl;
		}
		cout<<endl;
	}
	return 0;
} 
