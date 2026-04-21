#include <stdio.h>

int main() {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	
	if(a%2==0 || b%2==0)
		puts("0");
	else
		printf("%lld\n", a>b ? b : a);
		
	return 0;
}
