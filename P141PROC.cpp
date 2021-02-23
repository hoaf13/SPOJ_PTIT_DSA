#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x=0;
	for (int i=1;i<=n;i++){
		string str;
		cin>>str;
		if (str=="++X" || str=="X++") x++;
		if (str=="--X" || str=="X--") x--;	
	}
	cout<<x;
	return 0;
}
 
