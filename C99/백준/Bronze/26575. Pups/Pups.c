#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
    
	for(int i=0; i<n; i++) {
		double d, f, p;
		scanf("%lf %lf %lf", &d, &f, &p);
        
		double total = d * f * p;
		printf("$%.2f\n", round(total * 100) / 100);
	}
    
	return 0;
}
