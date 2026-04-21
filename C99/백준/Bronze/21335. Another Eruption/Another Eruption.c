#include <stdio.h>
#include <math.h>

int main() {
	long long a;
	scanf("%lld", &a);
	
	printf("%.10lf\n", 2*sqrt(3.1415926535*a));
	return 0;
}
