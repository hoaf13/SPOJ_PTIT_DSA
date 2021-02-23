#include <stdio.h>
#include <string.h>
 
void Solve() {
	char s[10000];
	int number, R;
	// nhap so thu tu va so R
	scanf("%d%d", &number, &R); 
	// Nhap chuoi
	scanf("%s", &s);
	printf("%d ", number);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < R; j++) {
			printf("%c", s[i]);
		}
	}
	printf("\n");
}
int main()
{
	int test;
	scanf("%d", &test);
	for (int i = 1; i <= test; i++) {
		Solve();
	}
	return 0;
}
 
 
