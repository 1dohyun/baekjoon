#include <stdio.h>
#include <math.h>

int main() {
	double w, h;
	scanf("%lf %lf", &w, &h);
	
	printf("%d\n", (int)ceil(w*h/24200));
	return 0;
}
