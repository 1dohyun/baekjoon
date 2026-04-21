#include <stdio.h>

int main() {
	int n, total = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		int t;
		scanf("%d", &t);
		
		total += t+8;
	}
	
	total -= 8;
	printf("%d %d\n", total/24, total%24);
	
	return 0;
}
