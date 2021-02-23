#include <iostream>
 
using namespace std;
 
int main()
{
    int n,m;
    long long s=0;
    cin >> m >> n;
    s=m*n;
    long a[m+2][n+2];
    for(int i=0;i<m+2;i++)
        for(int j=0;j<n+2;j++)
        {
            if(i==0||i==m+1||j==0||j==n+1) a[i][j]=0;
            else cin >> a[i][j];
        }
    for(int i=1;i<m+1;i++)
        for(int j=1;j<n+1;j++)
        {
           if(a[i][j]>a[i-1][j]) s+=(a[i][j]-a[i-1][j]);   //vi tri tren
           if(a[i][j]>a[i+1][j]) s+=(a[i][j]-a[i+1][j]);   //vi tri duoi
           if(a[i][j]>a[i][j-1]) s+=(a[i][j]-a[i][j-1]);   //vi tri trai
           if(a[i][j]>a[i][j+1]) s+=(a[i][j]-a[i][j+1]);   //vi tri phai
        }
    cout << s;
 
} 
