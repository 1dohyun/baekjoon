#include <stdio.h>

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	double A = (a*b)/c;
	double B = (a/b)*c;
	
	printf("%d\n", (int)A>(int)B ? (int)A : (int)B);
    return 0;
}