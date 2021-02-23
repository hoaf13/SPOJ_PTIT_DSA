#include<iostream>
#include<string>
using namespace std;
 
string Colum(int x) {
	string ans = "";
	char  c;
	while (x>0) {
		x--;
		c = 'A' + x % 26;
		ans = c + ans;
		x = x / 26;
	}
	return ans;
}
 
int main() {
	while (1) {
		char tmp;
		int n, m;
		cin >> tmp >> n >> tmp >> m;
		if (n == 0 && m == 0) return 0;
		cout << Colum(m)<< n << endl;
	}
//====================
	// cout << endl;
	// system("pause");
	return 0;
} 
