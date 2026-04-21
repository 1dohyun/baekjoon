#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int avg = (a+b+c)/3;
	printf("%d\n", abs(a-avg)+abs(c-avg));
	
	return 0;
}
