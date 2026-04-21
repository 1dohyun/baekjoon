#include <stdio.h>

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	
	printf("%lld\n", (b<a+1) ? b : a+1);
	return 0;
}
