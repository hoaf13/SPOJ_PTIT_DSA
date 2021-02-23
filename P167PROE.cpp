#include <iostream>
using namespace std;
 
int main(){
    int t,k=0;
    cin>>t;
    while(k<t){
    	k++;
    	long n;
        cin>>n;
	    long dem=1;
	    for (long i= 2*n-1; i>n; i--)
	        if (((long long)i*n)%(i-n)==0)
		        dem+=2;
		cout<<dem<<endl;
	}
    return 0;
} 
