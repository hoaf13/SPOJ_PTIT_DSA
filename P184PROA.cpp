#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int dem=0;
//cÃ³ 4 nguoi`:
//tren nhieu hon hoac bang 1 && duoi it hon hoac bang 2
//1 2
//2 1
//3 0
 
//- cÃ³ 5 nguoi`:
//tren nhieu hon hoac bang 1 && duoi it hon hoac bang 2
//1 3
//2 2
//3 1
//4 0		
	for(int i=0;i<=b;i++){
		if(n-i-1>=a) dem++; // tru` vi tri cua minh nua
		else break;
	}
	cout<<dem;
 
return 0;
}
 
