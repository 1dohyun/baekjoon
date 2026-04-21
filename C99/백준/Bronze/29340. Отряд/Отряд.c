#include <stdio.h>
#include <string.h>

int main() {
	char a[20], b[20];
	scanf("%s %s", a, b);
	
	int n = strlen(a);
	for(int i=0; i<n; i++)
		putchar(a[i] > b[i] ? a[i] : b[i]);
		
	putchar('\n');
	return 0;
}
