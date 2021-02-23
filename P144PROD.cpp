#include <iostream>
#include <string>
using namespace std;
 
int ssXau (string a, string b)
{
	while (1)
	{
		if (a.length()==b.length()) break;
		if (a.length()>b.length())	b='0'+b;
		else a='0'+a;
	}
	for (int i=0; i<a.length(); i++)
	{
		int soA=a[i]-'0';
		int soB=b[i]-'0';
		if (soA>soB) return 1;
		else if (soA<soB) return -1;
	}
	return 0;
}
 
string chXau (string a)
{
	int vt=-1;
	for (int i=0; i<a.length(); i++)
	{
		if (a[i]!='0')
		{
			vt=i;
			break;
		}
	}
	if (vt==-1) return "0";
	else
	{
		string b="";
		for (int i=vt; i<a.length(); i++)
		{
			b+=a[i];
		}
		return b;
	}
}	//chuan hoa xau
 
int main ()
{
	int N;
	int t=0;
	while (1)
	{
		cin>>N;
		if (N==0) break;
		t++;
		string Min="", Max="";
		string a;
		int kt=0;
		for (int i=1; i<=N; i++)
		{
			cin>>a;
			if (i==1)
			{
				Min=a;
				Max=a;
			}
			else
			{
				if (ssXau (a, Max)==1)
				{
					Max=a;
					kt=1;
				}
				if (ssXau (a, Min)==-1)
				{
					Min=a;
					kt=1;
				}
			}
		}
		if (kt==1)	cout<<"Case "<<t<<": "<<chXau (Min)<<" "<<chXau(Max)<<endl;
		else cout<<"Case "<<t<<": "<<"There is a row of trees having equal height."<<endl;
 
	}
	return 0;
} 
