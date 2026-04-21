#include <stdio.h>

int main() {
	int w1, h1;
	scanf("%d %d", &w1, &h1);
	
	int w2, h2;
	scanf("%d %d", &w2, &h2);
	
	int w3 = w1>w2 ? w1 : w2;
	printf("%d\n", 2*(h1+h2+w3)+4);
	return 0;
}
