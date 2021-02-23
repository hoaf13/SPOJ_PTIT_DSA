#include <iostream>
#include <string>
using namespace std;
string s[4];
int w, b, c;
main()
{
	for (long i = 0; i < 4; i++) cin >> s[i];
	c = 0;
	for (long i = 0; i < 3; i++)
	 if (c == 1) break; else
	  for (long j = 0; j < 3; j++)
	  {
	  	w = 0; b = 0;
	  	for (long p = i; p <= i + 1; p++)
	  	  for (long q = j; q <= j + 1; q++)
	  	    if (s[p][q] == '#') b++;
	  	    else w++;
	  	if ((b * w == 3) || ( b * w == 0)) 
		  {
		  	c = 1;
		  	break;
		  } 
	  }
	if (c) cout << "YES";
	else cout << "NO";
} 
