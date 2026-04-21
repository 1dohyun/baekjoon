#include <stdio.h>

int main() {
	int str, dex, intl, luk, n;
	scanf("%d %d %d %d %d", &str, &dex, &intl, &luk, &n);
	
	int sum = str+dex+intl+luk;
	printf("%d\n", 0>4*n-sum ? 0 : 4*n-sum);
    return 0;
}
