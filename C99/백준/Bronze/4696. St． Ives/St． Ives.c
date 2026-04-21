#include <stdio.h>

int main() {
	float n;
	scanf("%f", &n);
	
	while(n!=0) {
		printf("%.2f\n", 1+n+n*n+n*n*n+n*n*n*n);
		scanf("%f", &n);
	}
	
	return 0;
}
