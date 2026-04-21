#include <stdio.h>

int main() {
	int a, b, c, d, cnt = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("%d\n", b+c<a+d ? b+c : a+d);
	return 0;
}
