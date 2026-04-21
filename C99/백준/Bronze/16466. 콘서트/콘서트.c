#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int *)a-*(int *)b;
}

int main() {
	int n, min = 1;
	scanf("%d", &n);
	
	int arr[n];
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), cmp);
	
	for(int i=0; i<n; i++) {
		if(arr[i]==min)
			min++;
		else if(arr[i]>min)
			break;
	}
	
	printf("%d\n", min);
	return 0;
}
