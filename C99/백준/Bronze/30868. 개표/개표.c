#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i<t; i++) {
		int n;
		scanf("%d", &n);
		
		for(int j=0; j<n/5; j++)
			printf("++++ ");
		
		for(int j=0; j<n%5; j++)
			printf("|");
		
		putchar('\n');
	}
	
    return 0;
}
