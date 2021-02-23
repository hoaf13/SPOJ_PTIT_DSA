#include<iostream>
using namespace std;
long a,b,c,d,s,x;
 
long res( long x){
	long dem = 0, du;
	du = x % (a + b);
	if (du == 0) du = a + 1;
	if (du <= a) dem++;
	du = x % (c + d);
	if (du == 0) du = c + 1;
	if (du <= c) dem++;
	return dem;
}
main(){
	cin>>a>>b>>c>>d;
	for (int i=1;i<=3;i++){
		cin >> x;
		s= res(x);
		if (s==0) cout<< "none" <<endl;
		else if (s==1) cout<<"one"<<endl;
		else cout <<"both"<<endl;
	}
} 
