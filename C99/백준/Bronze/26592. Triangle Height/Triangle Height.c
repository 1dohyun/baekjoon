#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
		
	for(int i=0; i<n; i++) {
		double a, b;
		scanf("%lf %lf", &a, &b);
		
		printf("The height of the triangle is %.2lf units\n", 2*a/b);
	}
		
	return 0;
}
