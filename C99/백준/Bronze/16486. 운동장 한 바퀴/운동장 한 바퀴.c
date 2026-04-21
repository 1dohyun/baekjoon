#include <stdio.h>
#define pi 3.141592

int main() {
	double d1, d2;
	scanf("%lf %lf", &d1, &d2);
	
	printf("%.6f\n", 2*d1+2*d2*pi);
    return 0;
}