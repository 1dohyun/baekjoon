#include <stdio.h>

int main() {
	int n, found = 0;
	scanf("%d", &n);
	
	for(int i=1; i<=9; i++) {
		for(int j=1; j<=9; j++) {
			if(i==n || j==n || i*j==n) {
				found = 1;
				break;
			}
		}
	}
	
	printf("%d\n", found);
	return 0;
}
