#include <stdio.h>
#include <math.h>

int main() {
	double a;
	scanf("%lf", &a);
	
	double r = sqrt(a)*4;
	if(r==(int)r)
		printf("%d.0\n", (int)r);
	else
		printf("%.10lf\n", r);
	
	return 0;
}
