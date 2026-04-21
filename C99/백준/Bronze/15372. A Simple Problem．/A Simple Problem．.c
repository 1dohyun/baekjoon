#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	long long int n;
	for(int i=0; i<t; i++) {
		scanf("%lld", &n);
		printf("%lld\n", n*n);
	}
	
	return 0;
}
