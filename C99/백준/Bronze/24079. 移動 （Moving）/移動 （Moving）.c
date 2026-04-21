#include <stdio.h>

int main() {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	
	if(x+y<=z)
		putchar('1');
	else
		putchar('0');
	
	return 0;
}
