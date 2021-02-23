#include <iostream>
#include <string>
using namespace std;
long dx[8] = {-1,-1, 0, 1, 1, 1, 0,-1};
long dy[8] = {0 ,-1,-1,-1, 0, 1, 1, 1};
string s[100];
long r, c, res = 0;
 
long dem(long x, long y){
	long u, v;
	long d = 0;
	for (long i = 0; i < 8; i++){
		u = x + dx[i];
		v = y + dy[i];
		if ((u < 0) || (u >= r) || (v < 0) || (v >= c)) continue;
		if (s[u][v] == 'o') d++;
	}
	return d;
}
 
void datvitri(){
	long rd = -1, rx, ry;
	for (long i = 0; i < r; i++)
	  for (long j = 0; j < c; j++)
	    if (s[i][j] == '.'){
	    	long d = dem(i, j);
	    	if (d > rd){
	    		rd = d;
	    		rx = i;
	    		ry = j;
	    	}
	    }
	if (rd != -1) s[rx][ry] = 'o';
}
 
 
main(){
	cin >> r >> c;
	for (long i = 0; i < r; i++) cin >> s[i];
	datvitri();
	for (long i = 0; i < r; i++)
	  	for (long j = 0; j < c; j++)
	    	if (s[i][j] == 'o') res += dem(i, j);
	cout << res/2;
} 
