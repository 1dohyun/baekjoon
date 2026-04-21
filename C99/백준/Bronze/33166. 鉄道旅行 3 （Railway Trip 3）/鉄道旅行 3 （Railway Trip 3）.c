#include <stdio.h>

int main() {
	int p, q, a, b;
	scanf("%d %d %d %d", &p, &q, &a, &b);

	if(q>p)
		printf("%d\n", (q-p)*b + p*a);
	else
		printf("%d\n", q*a);
		
	return 0;
}
