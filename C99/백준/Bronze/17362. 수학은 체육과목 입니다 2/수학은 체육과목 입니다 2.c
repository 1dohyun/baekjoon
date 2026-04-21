#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char index[] = "12345432";
    printf("%c\n", index[(n-1)%8]);
    return 0;
}
