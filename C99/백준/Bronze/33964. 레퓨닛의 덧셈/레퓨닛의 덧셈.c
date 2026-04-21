#include <stdio.h>
#include <math.h>

int main() {
   	int x, y;
   	scanf("%d %d", &x, &y);
   	
   	printf("%d\n", (int)(pow(10, x)+pow(10, y)-2)/9);
	return 0;
}
