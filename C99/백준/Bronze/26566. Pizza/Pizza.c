#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		double a1, p1;
		scanf("%lf %lf", &a1, &p1);
	
		double r1, p2;
		scanf("%lf %lf", &r1, &p2);
	
		if(a1/p1 < 3.1415926535*r1*r1/p2)
			puts("Whole pizza");
		else
			puts("Slice of pizza");
	}
	
	
    return 0;
}
