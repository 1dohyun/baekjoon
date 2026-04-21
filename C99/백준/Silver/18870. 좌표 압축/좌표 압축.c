#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {
	int n, k = 0;
	scanf("%d", &n);
	
	int origin[n], x[n], sorted[n];
	for(int i=0; i<n; i++)
		scanf("%d", &origin[i]);
	
	memcpy(x, origin, sizeof(origin));
	qsort(x, n, sizeof(int), cmp);
	
	for(int i=0; i<n; i++) {
		if(i>0) {
			if(x[i]!=x[i-1])
				sorted[k++] = x[i];
		} else
			sorted[k++] = x[i];
	}
	
	for(int i=0; i<n; i++) {
		int *dex = (int *)bsearch(&origin[i], sorted, k, sizeof(int), cmp);
		printf("%d ", dex-sorted);
	}
	
	return 0;
}