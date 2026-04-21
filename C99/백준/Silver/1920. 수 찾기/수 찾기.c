#include <stdio.h>
#include <stdlib.h>

int a[100000];

int compare(const void *a, const void *b) {
	int A = *(int *)a;
    int B = *(int *)b;
    
    if (A < B)
		return -1;
    else if (A > B)
		return 1;
    else
		return 0;
}

int binSearch(int arr[], int size, int tar) {
	int left = 0, right = size-1;
	
	while (left<=right) {
		int mid = (left+right)/2;
		
		if (arr[mid] == tar)
			return 1;
		else if (arr[mid]<tar)
			left = mid+1;
		else 
			right = mid-1;
	}
	return 0;
}

int main() {
	int n, m, x;

	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);

	qsort(a, n, sizeof(int), compare);

	scanf("%d", &m);
	for (int i=0; i<m; i++) {
		scanf("%d", &x);
		printf("%d\n", binSearch(a, n, x));
	}

	return 0;
}
