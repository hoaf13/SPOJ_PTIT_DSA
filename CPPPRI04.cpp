#include<iostream>
#include<fstream>
#include<cmath>
 
using namespace std ;
 
int check[10000];
 
int main()
    {
		check[2] = 0 ;
		int i = 2 , j , a , n;
		while (i<10000)
			{
				while(check[i] != 0 ) i++ ;
				for ( j = 2; j <= 10000 / i  ; j++ ) 
					if(!check[j * i] ) check[j * i ] = i ;
				i++ ;
			}
		
		cin >> n ;
		while( n-- )
			{
				cin >> a ;
				cout << 1 << " " ;
				for (i = 2 ; i <= a ; i++ ) if (!check[i]) cout << i << " ";
				else cout << check[i] << " ";
				cout << endl ; 
			}
		return 0 ;
	} 
