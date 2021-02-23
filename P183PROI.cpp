#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
int value(char a){
	int k=a;
	if(k>=97) return k-96;
	else return k-64;
}
int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	int i;
	i=0;
	vector <char> b;
	vector <int> c;
	while(i<s.length()){
		b.push_back(s[i]);
		if(s[i]==s[i+1])
		{
			while(s[i]==s[i+1]) i++;
			i++;
		}
		else i++;
	}
	int l=b.size(),j=0;
	for (i=0;i<l;i++){
		int dem=0;
		while(s[j]==b[i]){
			dem++;
			j++;
		}
		c.push_back(dem);
	}
	long d[l];
	for (i=0;i<l;i++) d[i]=value(b[i])*c[i];
	// for (i=0;i<l;i++) cout<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
	long a[n];
	for (i=0;i<n;i++) cin>>a[i];
		for (i=0;i<n;i++)
		{
			bool flag=false;
			for (j=0;j<l;j++) 
				if(d[j]==a[i] || (c[j]>1 && a[i]/value(b[j])<=c[j] && a[i]%value(b[j])==0))
				{
					cout<<"Yes"<<endl;
					flag=true;
					break;
				}
			if(flag==false) cout<<"No"<<endl;
		}
	return 0;
} 
