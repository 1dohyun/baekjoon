#include <stdio.h>
#include <math.h>

int main() {
	double n;
	scanf("%lf", &n);
	
	printf("The largest square has side length %d.\n", (int)sqrt(n));
	return 0;
}
