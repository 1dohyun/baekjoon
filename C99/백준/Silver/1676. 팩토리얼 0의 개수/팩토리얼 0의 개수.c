#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    while(n>1)
    	count += n /= 5;
    
    printf("%d", count);
    return 0;
}
