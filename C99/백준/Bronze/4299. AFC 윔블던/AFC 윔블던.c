#include <stdio.h>

int main() {
    int sum, diff;
    scanf("%d %d", &sum, &diff);

    int a = (sum+diff)/2;
    int b = (sum-diff)/2;

    if (sum<diff || (sum+diff)%2!=0 || a<0 || b<0)
        printf("-1\n");
    else
        printf("%d %d\n", a, b);
    
    return 0;
}