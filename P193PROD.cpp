#include <iostream>
using namespace std;
 
int main() {
	
	int n;
	cin >> n;
	int flag = false;
	for (int i=1;i<=n/2;i++){
		if (i % 2 == 0 && (n-i)%2 == 0){
			flag = true;
			break;
		}
	}
	if (flag) cout << "YES";
	else cout << "NO";
	return 0;
} 
