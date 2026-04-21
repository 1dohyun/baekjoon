#include <stdio.h>

int main() {
    int n;

    while(scanf("%d", &n) && n != 0) {
        int teams[100];

        for(int i=0; i<n; i++)
            scanf("%d", &teams[i]);

        for(int i=n-1; i>=0; i--)
            printf("%d\n", teams[i]);

        printf("0\n");
    }

    return 0;
}
