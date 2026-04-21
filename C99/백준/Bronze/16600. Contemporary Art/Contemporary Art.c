#include <stdio.h>
#include <math.h>

int main() {
	long long a;
	scanf("%lld", &a);
	
	double b = sqrt(a)*4.0;
	
	if(b==(long long)b)
		printf("%.1f\n", b);
	else
		printf("%.9f\n", b);
    return 0;
}
