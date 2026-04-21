#include <stdio.h>
#include <stdlib.h>

int num[1000000];

int compare(const int* a, const int* b) {
	return *a - *b;
}
	
int main() {
	int n, tmp;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &tmp);
		num[i] = tmp;
	}
	
	qsort(num, n, sizeof(int), compare);
	
	for(int i=0; i<n; i++)
		printf("%d\n", num[i]);
	
	return 0;
}
