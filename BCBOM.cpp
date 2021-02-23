#include <iostream>
using namespace std;
char arr[101][101];
int m, n;
void in(){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) cout<<arr[i][j];
		cout<<"\n";
	}
}
int check(int i, int j){
	int cnt=0;
	int x1=i-1, y1=j-1, x2=i-1, y2=j, x3=i-1, y3=j+1, x4=i, y4=j-1, x6=i, y6=j+1, x7=i+1, y7=j-1, x8=i+1, y8=j, x9=i+1, y9=j+1;
	if(x1>=0 && y1>=0 && x1<m && y1<=n && arr[x1][y1]=='*') ++cnt;
	if(x2>=0 && y2>=0 && x2<m && y2<=n && arr[x2][y2]=='*') ++cnt;
	if(x3>=0 && y3>=0 && x3<m && y3<=n && arr[x3][y3]=='*') ++cnt;
	if(x4>=0 && y4>=0 && x4<m && y4<=n && arr[x4][y4]=='*') ++cnt;
	if(x6>=0 && y6>=0 && x6<m && y6<=n && arr[x6][y6]=='*') ++cnt;
	if(x7>=0 && y7>=0 && x7<m && y7<=n && arr[x7][y7]=='*') ++cnt;
	if(x8>=0 && y8>=0 && x8<m && y8<=n && arr[x8][y8]=='*') ++cnt;
	if(x9>=0 && y9>=0 && x9<m && y9<=n && arr[x9][y9]=='*') ++cnt;
	return cnt;
}
int main(){
	while(1){
		for(int i=0;i<101;i++)
			for(int j=0;j<101;j++) arr[i][j]='0';
		cin>>m>>n;
		if(m==0) break;
		for(int i=0;i<m;i++){
			int k=0;
			string s; cin>>s;
			for(int j=0;j<n;j++, k++) arr[i][j]=s[k];
		}
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				if(arr[i][j]!='*') arr[i][j]=check(i,j)+'0';
		in();
	}
	return 0;
} 
