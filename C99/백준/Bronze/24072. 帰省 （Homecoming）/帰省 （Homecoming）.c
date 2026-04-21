#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a<=c && c<b)
		puts("1");
	else
		puts("0");
	
	return 0;
}
