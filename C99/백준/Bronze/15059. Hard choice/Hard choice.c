#include <stdio.h>

int main() {
	int c, b, p, r = 0;
	scanf("%d %d %d", &c, &b, &p);
	
	int C, B, P;
	scanf("%d %d %d", &C, &B, &P);
	
	r += c-C<0 ? -(c-C) : 0;
	r += b-B<0 ? -(b-B) : 0;
	r += p-P<0 ? -(p-P) : 0;
	
	printf("%d\n", r);
	return 0;
}
