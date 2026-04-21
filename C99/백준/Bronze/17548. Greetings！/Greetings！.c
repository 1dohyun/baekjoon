#include <stdio.h>
#include <string.h>

int main() {
	char str[1001];
	scanf("%s", str);
	
	putchar('h');
	for(int i=0; i<(strlen(str)-2)*2; i++)
		putchar('e');
	putchar('y');
	
	return 0;
}
