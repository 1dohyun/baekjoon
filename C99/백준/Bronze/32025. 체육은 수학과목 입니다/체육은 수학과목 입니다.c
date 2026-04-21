#include <stdio.h>

int main() {
	int h, w, r;
	scanf("%d %d", &h, &w);
	
	h *= 100; w *= 100;
	r = h<w ? h/2 : w/2;
	
	printf("%d\n", r);
    return 0;
}
