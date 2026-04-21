#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	double total = 0.0;
	
	for(int i=0; i<n; i++) {
		double q, y;
		scanf("%lf %lf", &q, &y);
		
		total += q*y;
	}
	
	printf("%.10f\n", total);
	return 0;
}
