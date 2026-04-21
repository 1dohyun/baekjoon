#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			printf("%d", i*m+j+1);
			if(j!=m-1)
				putchar(' ');
		}
		
		putchar('\n');
	}
	
	return 0;
}