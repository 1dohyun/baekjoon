#include <stdio.h>

int main() {
    int L, P;
    scanf("%d %d", &L, &P);
    
    int a, b, c, d, e, T = L*P;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    printf("%d %d %d %d %d\n", -(T-a), -(T-b), -(T-c), -(T-d), -(T-e));
    
    return 0;
}
