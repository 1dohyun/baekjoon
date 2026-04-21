#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d\n", a/2<b ? a/2 : b);
    return 0;
}
