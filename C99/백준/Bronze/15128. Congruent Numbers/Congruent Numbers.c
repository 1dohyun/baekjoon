#include <stdio.h>

int main() {
	int p1, q1, p2, q2;
	scanf("%d %d %d %d", &p1, &q1, &p2, &q2);
	
	printf("%d\n", ((long)p1*p2)%((long)2*q1*q2)==0 ? 1 : 0);
	return 0;
}
