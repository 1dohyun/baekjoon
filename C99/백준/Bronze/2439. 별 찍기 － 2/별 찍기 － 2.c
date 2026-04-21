#include <stdio.h>

int main() {
    int total;
    scanf("%d", &total);
    
    for (int i = 1; i <= total; i++) {
        for (int j = 0; j < total - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}