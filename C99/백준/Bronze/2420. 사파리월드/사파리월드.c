#include <stdio.h>

int main() {
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld", n-m>0 ? n-m : -(n-m));
    return 0;
}
