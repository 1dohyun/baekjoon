#include <stdio.h>

int main() {
	long long int r, c, n;
	scanf("%lld %lld %lld", &r, &c, &n);
	
	printf("%lld\n", ((r+n-1)/n) * ((n+c-1)/n));
	return 0;
}
