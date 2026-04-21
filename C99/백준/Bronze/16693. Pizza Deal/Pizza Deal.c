#include <stdio.h>
#include <math.h>

int main() {
	int a1, p1;
	scanf("%d %d", &a1, &p1);
	
	int r1, p2;
	scanf("%d %d", &r1, &p2);
	
	if((double)a1/p1>(r1*r1*3.1415926535)/p2)
		puts("Slice of pizza");
	else
		puts("Whole pizza");
		
	return 0;
}
