#include <stdio.h>

int main() {
	int n, d, total = 0;
	scanf("%d %d", &n, &d);
	
	int p[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &p[i]);
		total += p[i];
	}
		
		
	for(int i=0; i<n; i++)
		printf("%d\n", d/total*p[i]);
	
	return 0;
}
