#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	printf("%.10f\n%.10f\n", 100.0/a, 100.0/(100-a));
	return 0;
}
