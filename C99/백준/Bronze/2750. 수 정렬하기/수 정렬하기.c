#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int *)a-*(int *)b;
}

int main() {
	int n, arr[1000];
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	qsort(arr, n, sizeof(int), cmp);
	
	for(int i=0; i<n; i++)
		printf("%d\n", arr[i]);
	
	return 0;
}
