#include <stdio.h>

int main() {
	int a, x, b, y, t;
	scanf("%d %d %d %d %d", &a, &x, &b, &y, &t);
	
	int ov1 = t-30<0 ? 0 : t-30;
	int ov2 = t-45<0 ? 0 : t-45;
	
	printf("%d %d\n", a+21*ov1*x, b+21*ov2*y);
	return 0;
}
