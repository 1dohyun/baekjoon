#include <stdio.h>

int main() {
	int c4, a3, a4;
	scanf("%d %d %d", &c4, &a3, &a4);
	
	printf("%.10f\n", 0.229*0.324*c4*2 + 0.297*0.42*a3*2 + 0.21*0.297*a4);
	return 0;
}
