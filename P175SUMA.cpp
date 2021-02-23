#include <iostream>
using namespace std;
 
int main ()
{
	int n, k;
	cin>>n>>k;
	char arr[100005];
	for (int i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
 
	int diff_pair=0;
	int same_pair=0;
	for (int i=1, j=n; i<=n, j>=1; i++, j--)
	{
		if (i>=j) break;
		if (arr[i]!=arr[j]) diff_pair++;
		else if (arr[i]==arr[j]) same_pair++;
	}
	if (k>n) cout<<"No";
	else if (k==n) cout<<"Yes";
	else
	{
		int kt=0;
		for (int i=0; i<=diff_pair; i++)
		{
			int change=1*i+(diff_pair-i)*2;
			if (change==k)
			{
				kt=1;
				break;
			}
			else
			{
				if (change<k)
				{
					int Excess = k-change;
					if (n%2!=0)
					{
						int change_max = same_pair*2;
						if (Excess<=change_max+1)
						{
							kt=1;
							break;
						}
					}
					else
					{
						int change_max = same_pair*2;
						if (Excess<=change_max && Excess%2==0)
						{
							kt=1;
							break;
						}
					}
				}
			}
		}
		if (kt==1) cout<<"Yes";
		else cout<<"No";
	}
	return 0;
}  
