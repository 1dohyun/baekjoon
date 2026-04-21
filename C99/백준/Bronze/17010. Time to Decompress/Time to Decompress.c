#include <stdio.h>

int main() {
	int l;
	scanf("%d", &l);
	
	for(int i=0; i<l; i++) {
		int n;
		char c;
		
		scanf("%d %c", &n, &c);
		for(int j=0; j<n; j++)
			printf("%c", c);
		putchar('\n');
	}
	
	return 0;
}
