#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int a[n+1];
	for (i=1;i<=n;i++) cin>>a[i];
	int max=a[1];
	int min=0;
	int move=a[1];
	for (i=2;i<=n;i++){
		if (i%2==0){
			move=move-a[i];
			if (move<min) min=move;
		}else {
			move=move+a[i];
			if (move>max) max=move;
		}
	}	
 
 
	int cot=0;
	int hang=max+abs(min);
	for (i=1;i<=n;i++){
		cot+=a[i];
	}
	int d[hang+1][cot+1];
 
	for(i=1;i<=hang;i++){
		for(j=1;j<=cot;j++){
			d[i][j]=0;	
		}
	}
	
 
	int hangMove=hang-abs(min);
	int x=1;
	int dem=0;
 
	int cotMove=1;
 
	for (i=1;i<=n;i++){
		for (j=1;j<=a[i];j++){
			if (i%2!=0){
				d[hangMove][cotMove++]=1;
				if (j<a[i]) hangMove--;	
			}	
			else{
				d[hangMove][cotMove++]=2;
				if (j<a[i]) hangMove++;
			} 
		}
	}
 
	for(i=1;i<=hang;i++){
		for(j=1;j<=cot;j++){
			if (d[i][j]==1) cout<<"/";
			if (d[i][j]==2) cout<<"\\";
			if (d[i][j]==0) cout<<" "; 	
		}
		cout<<endl;
	}
return 0;
} 
