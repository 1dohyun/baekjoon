#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	if(a-1<b)
		b = a-1;
	
	printf("%d\n", 2*b+1);
	return 0;
}
