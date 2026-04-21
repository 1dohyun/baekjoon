#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int m = 1<<n;
    printf("%d", (m+1)*(m+1));
    return 0;
}
