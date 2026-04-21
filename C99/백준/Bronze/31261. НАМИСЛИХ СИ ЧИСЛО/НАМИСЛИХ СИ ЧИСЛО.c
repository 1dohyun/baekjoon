#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%lld\n", (long long)a*a*(a+b+1));
    return 0;
}
