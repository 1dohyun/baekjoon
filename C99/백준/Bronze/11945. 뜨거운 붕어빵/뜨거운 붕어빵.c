#include <stdio.h>

int main() {
	int n, m, fish[11][11];
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++)
			scanf(" %c", &fish[i][m-j-1]);
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++)
			printf("%c", fish[i][j]);
		putchar('\n');
	}
	
	return 0;
}
