#include <stdio.h>

int main() {
	int a, b, c, d, e, f, x, y;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	
	for(x=-999; x<=999; x++) {
		for(y=-999; y<=999; y++) {
			if((x*a+y*b==c)&&(x*d+y*e==f)) {
				printf("%d %d\n", x, y);
				break;
			}
		}
	}
	
	return 0;
}
