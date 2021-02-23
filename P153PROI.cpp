#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int m,k;
	cin>>m;
	cin.ignore();
	for (k=0;k<m;k++)
	{
		string s;
		getline(cin,s);
		string b;
		b="";
		int a[50],n,i,j,dem=0;
	    for ( i=97;i<=122;i++) a[i]=0; // khoi tao mang gia tri cua cac ki tu
	    n=s.length();
	    for (i=0;i<n;i++) if(s[i]!=' ')b+=s[i];
	    n=b.length();
	    for (i=0;i<n;i++) 
	    {
	    	if(b[i]!=' ' && b[i]>=65 && b[i]<=90) b[i]+=32;   // chuan hoa xau ve full ki tu thuong
		}
		for (i=0;i<n;i++)
		{
			if(b[i]!=' ' )
			{
				j=b[i];
				a[j]++;                              // dem so lan xuat hien cua ki tu
			}
		}
		for (i=97;i<=122;i++)
		{
			if(a[i]>1) dem+=a[i];            // gia tri cua mat thu
		}
		cout<<dem<<" "<<b[0];
		for (i=1;i<n;i++)
		{
			bool flag=true;
			j=b[i];
			if(a[j]>=1)
			{
				for (int l=i-1;l>=0;l--)
				  if(b[l]==b[i])
				  {
				  	flag=false;
				  	break;
				  }
				if(flag==true) cout<<b[i];
			}
		}
		cout<<endl;
	}
	return 0;
} 
