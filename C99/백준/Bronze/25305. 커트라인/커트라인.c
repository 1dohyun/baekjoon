#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int *)b-*(int *)a;
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	
	int x[n];
	
	for(int i=0; i<n; i++)
		scanf("%d", &x[i]);
	
	qsort(x, n, sizeof(x[0]), cmp);
	printf("%d\n", x[k-1]);

	return 0;
}
