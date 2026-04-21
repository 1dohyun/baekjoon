#include <stdio.h>
#include <math.h>

int main() {
	double a;
	scanf("%lf", &a);
	
	printf("%.10lf\n", sqrt(a*3.1415926535897932)*2);
	return 0;
}
