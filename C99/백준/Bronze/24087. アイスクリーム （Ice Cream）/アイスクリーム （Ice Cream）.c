#include <stdio.h>

int main() {
	int s, a, b;
	scanf("%d %d %d", &s, &a, &b);
	
	int p = s>a ? (s-a+b-1)/b : 0;
	printf("%d\n", 250+100*p);
	
	return 0;
}
