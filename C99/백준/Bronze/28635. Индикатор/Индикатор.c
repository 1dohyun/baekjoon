#include <stdio.h>

int main() {
    int m, a, b;
    scanf("%d %d %d", &m, &a, &b);
    
    printf("%d\n", (m+b-a)%m);
    return 0;
}
