#include <stdio.h>

int main() {
    int total = 0;
	scanf("%d", &total);

    for(int i = 0; i < total; i++) {
        for(int v = 0; v <= i; v++) {
            printf("*");
        }
        printf("\n");
	}
    return 0;
}