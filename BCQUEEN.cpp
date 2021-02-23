// 8 queens vers 1
#include<iostream>
#include<cmath>
	// gia su co quan hau dat tai vi tri (x1,y1), ta muon dat them con hau ke tiep
	// tai vi tri (x2,y2), lam the nao ?
using namespace std;
int a[11] ; // luu vet chuong trinh
int dem=0;
 
bool OK(int x2, int y2 ){ // k tra vi tri (x2, y2) co dat dc queen ?
	for(int i = 1; i< x2; i++ )
		//a[i] == y2 => columns are same
		//|i - x2| == |a[i] - y2| => in diagonals.
		if(a[i] == y2|| abs(i-x2) == abs(a[i] - y2) ) return false;
	return true;
}
 
void xuat(int n ){
	for(int i=1; i<= n; i++ ) cout<<a[i]<<" ";
	cout<< endl;
}
 
void Try(int i, int n ){
	for(int j = 1; j<= n; j++ )
		if(OK(i,j)) // queen tai vi tri hang i dat vao cot thu j
		{
			a[i] = j;
			if(i==n){
//				xuat(n);
				dem++;
			}
			Try(i+1,n);
		}
		
}
 
int main(){
	int n;
	cin>>n;
	Try(1,n);
	cout<<dem;
	return 0;
} 
