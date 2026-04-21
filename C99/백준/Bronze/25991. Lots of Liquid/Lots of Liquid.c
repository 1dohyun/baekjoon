#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	
	double sum = 0.0;
	
	for(int i=0; i<n; i++) {
		double c;
		scanf("%lf", &c);
		
		sum += c*c*c;
	}
	
	printf("%.10lf\n", cbrt(sum));
	return 0;
}
