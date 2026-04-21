#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return (*(int *)b-*(int *)a);
}

int main() {
	int n, max = 0;
	scanf("%d", &n);
	
	int arr[n];
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(int), cmp);
	
	for(int i=0; i<n; i++)
		max = max<arr[i]+i+1 ? arr[i]+i+1 : max;
	
	printf("%d\n", max+1);
	return 0;
}
