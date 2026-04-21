#include <stdio.h>

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
	
	printf("%lld\n", n/2<m/2 ? n/2 : m/2);
    return 0;
}
