#include<iostream>
using namespace std;
int main(){
 
	int r,c,i,j;
	cin>>r>>c;
	char a[r][c];
	int b[r][c],hang[r],cot[c],dem=0;
	for (i=0;i<r;i++) hang[i]=0; 
	for (i=0;i<c;i++) cot[i]=0;  
	for (i=0;i<r;i++)
	  for (j=0;j<c;j++) 
	  {
	  	cin>>a[i][j];          
	  	b[i][j]=0;
	  }
	i=0;
	while(i<r)
	{
		for (j=0;j<c;j++) 
		if(a[i][j]=='S')
		{
			hang[i]=1;      
			break;
		}
		i++;
	}
	for (i=0;i<r;i++)
	 if(hang[i]==0)
	 {
	 	for (j=0;j<c;j++) b[i][j]=1;      
	 }
	j=0;
	while(j<c)
	{
		for (i=0;i<r;i++) if(a[i][j]=='S')
		{
			cot[j]=1;                      
			break;
		}
		j++;
	}
	for (j=0;j<c;j++)
	 if(cot[j]==0)
	 {
	 	for (i=0;i<r;i++)b[i][j]=1;           
	 }
	for (i=0;i<r;i++)
	  {
	  	for (j=0;j<c;j++) 
	  	 if(b[i][j]==1) dem++;             
	  }
	cout<<dem;
	return 0;
} 
