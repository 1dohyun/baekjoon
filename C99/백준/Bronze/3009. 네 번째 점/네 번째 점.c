#include <stdio.h>

int main() {
	int x[3], y[3], rx, ry;
	
	for(int i=0; i<3; i++)
		scanf("%d %d", &x[i], &y[i]);
	
	rx = x[0]^x[1]^x[2];
	ry = y[0]^y[1]^y[2];
	printf("%d %d\n", rx, ry);
	
	return 0;
}
