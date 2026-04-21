#include <stdio.h>

int main() {
	int x, y, w, h, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	min = w-x<h-y ? w-x : h-y;
	min = min<y ? min : y;
	min = min<x ? min : x;
	
	printf("%d", min);
    return 0;
}
