#include <stdio.h>

int main() {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	
	int a, c, e;
	scanf("%d %d %d", &a, &c, &e);
	
	if(a>=x && c>=y && e>=z)
		puts("A");
	else if(a>=(x+1)/2 && c>=y && e>=z)
		puts("B");
	else if(c>=y && e>=z)
		puts("C");
	else if(c>=(y+1)/2 && e>=z)
		puts("D");
	else
		puts("E");
		
	return 0;
}
