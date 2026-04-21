#include <stdio.h>

int fact(int a) {
	int total = a;
	if(a == 0) return 1;
	
	for(int i=a; i>0; i--)
		total *= i;
	
	return total/a;
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	
	printf("%d", fact(n)/(fact(n-k)*fact(k)));
    return 0;
}
