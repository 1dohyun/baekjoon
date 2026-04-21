#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		double a, b;
		scanf("%lf %lf", &a, &b);
		printf("%.1f\n", fabs(a-b));
	}
	
	return 0;
}
