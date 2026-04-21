#include <stdio.h>

long long fact(int n) {
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
}

int main() {
	int n;
	scanf("%d", &n);
	
	printf("%lld\n", fact(n)/24/60/60/7);
	return 0;
}
