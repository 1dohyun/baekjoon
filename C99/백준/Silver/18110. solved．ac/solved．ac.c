#include <stdio.h>

#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b) {
	return *(int *)a-*(int *)b;
}

int main() {
	int n;
	scanf("%d", &n);
	
	if(n==0) {
		printf("0\n");
		return 0;
	}
	
	int dif[n];
	for(int i=0; i<n; i++)
		scanf("%d", &dif[i]);
		
	qsort(dif, n, sizeof(int), cmp);
	float cut = round((float)n*0.15);
	
	for(int i=0; i<cut; i++)
		dif[i] = dif[n-i-1] = 0;
	
	float sum = 0;
	for(int i=0; i<n; i++)
		sum += dif[i];
	
	printf("%.0f\n", round(sum/(n-cut*2)));
	
	return 0;
}
